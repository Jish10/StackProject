# Stack Implementation in C

This project implements a **Stack** data structure in the C programming language using a **singly linked list**. It simulates process storage, where each element contains a process ID and a command name.

## Features

- Dynamic memory allocation using linked nodes
- Functions to:
  - Create a new stack
  - Push a process onto the stack
  - Pop a process from the stack
  - Check if the stack is empty
  - Empty the entire stack
  - Free the stack memory

## Structure

- `stack.h` – Contains data structures (`valueT`, `nodeT`, `stackT`) and function prototypes 
- `main.c` – Example usage (can be extended for testing) and functions implementations

## Compilation

To compile the project:

```bash
gcc main.c stack.c -o stack

## Created by : João Melicio; Eder Evora
