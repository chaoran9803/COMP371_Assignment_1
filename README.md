# COMP371 — Assignment 1

C++ assignment for COMP371, split into two independent parts.

## Contents

| Part      | Topic                                     | Details                       |
| --------- | ----------------------------------------- | ----------------------------- |
| **part1** | Custom dynamic array in C++               | [part1/README.md]([[part1/README.md](https://github.com/chaoran9803/COMP371_Assignment_1/blob/main/part1/READ.md) |
| **part2** | 3D Points & Triangles using OOP           | [part2/README.md](https://github.com/chaoran9803/COMP371_Assignment_1/blob/main/part2/READ.md) |

`pt1_pt2_outputs/` holds sample program output for both parts.

## Quick start

### Part 1 — Dynamic Array

```bash
cd part1
g++ main.cpp function_implementation.cpp -o main
./main
```

### Part 2 — Points & Triangles

```bash
cd part2
cmake -S . -B build
cmake --build build
./build/PointTriangle
```

## Requirements

- A C++ compiler with C++14 support (e.g. `g++`)
- CMake ≥ 3.10 (part 2 only)

See each part's own `README.md` for a full description of what the program does
and how to use it.
