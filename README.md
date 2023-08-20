# Custom Printf Implementation

This repository contains our custom implementation of the `printf` function in C. The `printf` function is a standard library function that allows you to format and print text and data in various ways. This implementation aims to provide similar functionality to the standard `printf` function while adhering to the specified requirements.


## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
## Introduction

The custom `printf` function provided in this repository is a simplified version of the standard `printf` function found in the C standard library. It supports basic conversion specifiers, allowing you to print characters, strings, and special characters such as `%`. The goal of this project is to demonstrate a basic understanding of string formatting and output functions in C.

## Usage

To use the custom `printf` function in your C code, follow these steps:

1. Clone this repository: `git clone https://github.com/k3yboardnerd/printf.git`
2. Include the `main.h` header in your source code: `#include "main.h"`
3. Use the `_printf` function just like you would with the standard `printf` function:
```c
_printf("Hello, %s! The number is %d.\n", "world", 42);
