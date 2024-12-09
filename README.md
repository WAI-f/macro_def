# macro_def
Control macro definition off/on in cmakelist.txt. In this project, macro definition is off in default.

1. build with macro definition on
```bash
mkdir build
cd build
cmake -DUSE_LOG=on ..
make
./macro_def
```

2. build with macro definition off
```bash
mkdir build
cd build
cmake -DUSE_LOG=off ..
make
./macro_def
```