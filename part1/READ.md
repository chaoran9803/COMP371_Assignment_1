# Part 1 — Dynamic Array in C++

A small program that demonstrates a hand-written dynamic array using raw
pointers. The `arrayFunction` class can create, initialize, print, and delete
a dynamically allocated integer array.

## Files

| File                          | Purpose                                   |
| ----------------------------- | ----------------------------------------- |
| `function.h`                  | Declaration of the `arrayFunction` class  |
| `function_implementation.cpp` | Method definitions                        |
| `main.cpp`                    | Demo driver                               |

## Build

From the `part1` folder:

```bash
g++ main.cpp function_implementation.cpp -o main
```

## Run

```bash
./main
```

## What it does

The demo creates an array of size 10, fills it with `1..10`, prints it,
deletes it, then prints again to show the array is now empty.
