# boost-tests

[simple-program](simple-program)

* Reference CMakeLists.txt that includes fmt 


## CMake
```
-DCMAKE_BUILD_TYPE=Release
-DCMAKE_BUILD_TYPE=Debug
```

## FMT (String format)
[Fmt](https://fmt.dev/latest/)

[On how to use it](https://github.com/fmtlib/fmt/blob/master/doc/usage.rst)
as submodule...

## [spdlog](https://github.com/gabime/spdlog)
```
cd vendor/spdlog && mkdir build && cd build
cmake .. && make -j
```


## Boost
[Get boost](https://dl.bintray.com/boostorg/release/1.71.0/source/boost_1_71_0.tar.bz2)

```
tar --bzip2 -xf /path/to/boost_1_71_0.tar.bz2
```
Compile boost modules:
```
./bootstrap.sh --with-libraries=log regex
./b2 install
```

* Using conan as package manager !
