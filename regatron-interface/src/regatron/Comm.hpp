
#pragma once

#define SYS_VALUES 64
#define DEV_VALUES 0

#include <memory>
#include <unistd.h>

#include "Version.hpp"
#include "Readings.hpp"
#include "IBC.hpp"

namespace Regatron {

  class Comm {
    private:
      // Connection
      int m_port = 0;
      int m_portNrFound = -1;

      // Software version
      std::shared_ptr<Regatron::Version> m_version;

      // Readings
      std::shared_ptr<Regatron::Readings> m_readings;

      // IBC
      std::shared_ptr<Regatron::IBC> m_ibc;

      // Increment (internal usage)
      double incDevVoltage = 0.0;
      double incDevCurrent = 0.0;
      double incDevPower = 0.0;
      double incDevResistance = 0.0;
      double incSysVoltage = 0.0;
      double incSysCurrent = 0.0;
      double incSysPower = 0.0;
      double incSysResistance = 0.0;

      void selectModule(int);
      void selectDevice();
      void selectSystem();

    public:
      Comm(int port);
      Comm();
      ~Comm();
      void connect();
      void connect(int port);
      void connect(int fromPort, int toPort);
      bool isMaster();
      void moduleIDInfo();
      void readSystem();
      void readDevice();
      void readTemps();
  };

#define REG_STATE_POWER_UP 2
#define REG_STATE_READY    4
#define REG_STATE_RUN      8
#define REG_STATE_WARNING  10
#define REG_STATE_ERROR    12
#define REG_STATE_STOP     14

}