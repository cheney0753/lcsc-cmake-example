# LCSC CMake example

Simple example of executable + library for the UU course WISM454

```bash
# build library
cd ext/logger
mkdir build
cd build
cmake ..
make -j8

# build and run executable
cd ../..
mkdir build
cd build
make -j8
./bin/logfib
```

