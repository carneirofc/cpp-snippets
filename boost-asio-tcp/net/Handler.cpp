#include "Handler.hpp"

#include "log/Logger.hpp"

namespace Net{
    const std::string Handler::handle(const std::string& message){
        //write operation
        LOG_INFO("Base handler. Message: {}", message);

        return "Overwrite me !\n";
    }
}