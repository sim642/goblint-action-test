### CMake (`set(CMAKE_EXPORT_COMPILE_COMMANDS ON)` in `CMakeLists.txt`)
```
mkdir build
cd build
cmake ..
goblint -v --enable dbg.debug compile_commands.json
```

### CMake (general)
```
mkdir build
cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
goblint -v --enable dbg.debug compile_commands.json
```

### Bear
E.g. after generating `Makefile` with CMake in `build`:
```
make clean
bear -- make
goblint -v --enable dbg.debug compile_commands.json
```