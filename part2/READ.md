# Part 2 — Points & Triangles (OOP)

A C++ program that applies object-oriented principles to model 3D `Point`s and
a `Triangle` made of three points. It supports translating along the x, y, or z
axis and computing the triangle's area.

## Files

| File                 | Purpose                                  |
| -------------------- | ---------------------------------------- |
| `include/point.h`    | `Point` class declaration                |
| `include/triangle.h` | `Triangle` class declaration             |
| `src/point.cpp`      | `Point` implementation                   |
| `src/triangle.cpp`   | `Triangle` implementation                |
| `src/main.cpp`       | Interactive demo driver                  |
| `CMakeLists.txt`     | Build configuration                      |

## Build

From the `part2` folder:

```bash
cmake -S . -B build
cmake --build build
```

This produces an executable named `PointTriangle` inside `build/`.

## Run

```bash
./build/PointTriangle
```

## How to use

When the program starts you pick a mode:

- **Enter `1`** — automatic demo. Shows point translation and builds a random
  triangle, translates it, and prints its area.
- **Enter `2`** — interactive mode. You type the three vertices of the triangle
  (three numbers each, e.g. `1 2 3`), choose an axis (`x`, `y`, or `z`) and a
  distance to translate by, then the program prints the moved triangle and its
  area.
