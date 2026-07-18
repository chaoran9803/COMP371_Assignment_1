  1 # Part 1 — Dynamic Array in C++
  2
  3 A small program that demonstrates a hand-written dynamic array using raw
  4 pointers. The `arrayFunction` class can create, initialize, print, and delete
  5 a dynamically allocated integer array.
  6
  7 ## Files
  8
  9 | File                          | Purpose                                   |
 10 | ----------------------------- | ----------------------------------------- |
 11 | `function.h`                  | Declaration of the `arrayFunction` class  |
 12 | `function_implementation.cpp` | Method definitions                        |
 13 | `main.cpp`                    | Demo driver                               |
 14
 15 ## Build
 16
 17 From the `part1` folder:
 18
 19 ```bash
 20 g++ main.cpp function_implementation.cpp -o main
 21 ```
 22
 23 ## Run
 24
 25 ```bash
 26 ./main
 27 ```
 28
 29 ## What it does
 30
 31 The demo creates an array of size 10, fills it with `1..10`, prints it,
 32 deletes it, then prints again to show the array is now empty.
