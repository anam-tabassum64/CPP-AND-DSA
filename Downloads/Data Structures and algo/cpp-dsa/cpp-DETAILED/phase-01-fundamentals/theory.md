# Phase 1 - Theory

This document explains the concepts covered in Phase 1 of C++ Fundamentals in a detailed but beginner-friendly way.

Use it as the main reference while studying the roadmap and while revising before interviews.

---

## 1. Introduction to C++

### Definition

C++ is a compiled, general-purpose programming language that gives programmers both high performance and fine control over system resources.

### Explanation

C++ is commonly used when speed, memory efficiency, and direct control over low-level behavior matter. It supports procedural programming, object-oriented programming, generic programming, and modern language features.

### Syntax

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, C++" << endl;
    return 0;
}
```

### Internal Working

C++ source code is translated into machine code by a compiler. The compiler checks syntax, produces object code, and then the linker combines program parts into an executable.

### Memory Representation

C++ itself is not memory by itself, but programs written in C++ control memory explicitly or implicitly depending on the variables and objects used.

### Diagram

```text
Source Code -> Compiler -> Object File -> Linker -> Executable -> Loader -> Memory
```

### Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "C++ is fast and flexible" << endl;
    return 0;
}
```

### Output

```text
C++ is fast and flexible
```

### Best Practices

- Learn the language step by step
- Prefer clear code over clever code
- Use standard library features where appropriate

### Common Mistakes

- Treating C++ like a purely interpreted language
- Ignoring memory management concepts
- Mixing up language features from different paradigms

### Real-world Uses

- Operating systems
- Game engines
- Embedded systems
- Competitive programming

### Interview Notes

- Explain why C++ is used in performance-sensitive systems
- Be ready to compare it with higher-level languages

---

## 2. History of C++

### Definition

C++ evolved from C and was designed to combine procedural programming with object-oriented features and better abstraction support.

### Explanation

The language evolved to provide efficiency while adding classes, templates, exceptions, and modern safety improvements over time.

### Internal Working

The history matters because many older and newer language rules coexist in the standard.

### Best Practices

- Learn why features were introduced
- Understand that older C-style code still appears in real codebases

### Interview Notes

- Mention that modern C++ includes versions such as C++11, C++14, C++17, and C++20

---

## 3. Features of C++

### Definition

C++ is known for speed, control, portability, object-oriented support, generic programming, and strong standard library support.

### Explanation

Key features include classes, templates, function overloading, operator overloading, exceptions, and the Standard Template Library.

### Common Mistakes

- Thinking C++ is only for OOP
- Ignoring its generic and systems-level strengths

### Interview Notes

- Be able to mention both performance and abstraction benefits

---

## 4. Applications of C++

### Explanation

C++ is used in areas where low latency, deterministic behavior, and hardware control matter.

### Real-world Uses

- Game engines
- Browsers
- Compilers
- Database engines
- Financial systems
- Embedded software

### Interview Notes

- Mention a practical use case related to your domain

---

## 5. Compilation Process

### Definition

The compilation process is the sequence of steps that turns a C++ source file into an executable program.

### Explanation

The process typically includes preprocessing, compilation, assembly, linking, and loading.

### Syntax

No single syntax form applies here because this is a build pipeline concept.

### Internal Working

```text
.cpp file
   |
   v
Preprocessor
   |
   v
Compiler
   |
   v
Assembler
   |
   v
Object file
   |
   v
Linker
   |
   v
Executable
   |
   v
Loader
   |
   v
Memory
```

### Best Practices

- Understand each step before debugging compiler errors
- Learn which errors belong to which stage

### Common Mistakes

- Blaming the compiler for linker errors
- Confusing source code with executable code

### Interview Notes

- Explain the difference between compile-time and run-time

---

## 6. Source File

### Definition

A source file is a `.cpp` file containing C++ code.

### Explanation

Source files are the input to the compiler. They may include headers, declarations, definitions, and the `main()` function.

### Code Example

```cpp
#include <iostream>

int main() {
    return 0;
}
```

### Best Practices

- Keep files organized
- Use meaningful names

### Common Mistakes

- Putting unrelated logic into one file
- Forgetting include guards or proper modular structure later on

---

## 7. Preprocessor

### Definition

The preprocessor handles directives before compilation begins.

### Explanation

It expands macros, processes include directives, and handles conditional compilation.

### Syntax

```cpp
#include <iostream>
#define PI 3.14159
```

### Internal Working

The preprocessor performs textual substitution before the compiler sees the final translation unit.

### Best Practices

- Prefer `const` or `constexpr` over macros when possible
- Use headers responsibly

### Common Mistakes

- Overusing macros
- Creating name conflicts with `#define`

### Interview Notes

- Know that preprocessing happens before compilation

---

## 8. Compiler

### Definition

The compiler translates preprocessed C++ code into object code.

### Explanation

It checks syntax, performs semantic analysis, and generates machine-oriented output.

### Common Mistakes

- Mixing syntax errors with logical errors
- Assuming the compiler catches every bug

### Interview Notes

- Explain that compilation is not the same as linking

---

## 9. Assembler

### Definition

The assembler converts assembly-like output into machine code object files.

### Explanation

This stage bridges compiler output and linkable object code.

### Interview Notes

- Understand it as part of the build pipeline

---

## 10. Linker

### Definition

The linker combines object files and libraries into a single executable.

### Explanation

It resolves symbol references across translation units.

### Common Mistakes

- Undefined reference errors are often linker errors

### Interview Notes

- Distinguish compile-time from link-time failures

---

## 11. Loader

### Definition

The loader places the executable into memory and prepares it to run.

### Explanation

It maps code and data into memory and transfers control to the program entry point.

### Interview Notes

- Loader concepts are often asked in system-level interviews

---

## 12. Variables

### Definition

A variable is a named storage location that holds a value.

### Syntax

```cpp
int age = 20;
double price = 99.5;
```

### Internal Working

A variable reserves memory based on its type.

### Memory Representation

```text
age   -> 20
price -> 99.5
```

### Best Practices

- Use meaningful names
- Initialize variables before use

### Common Mistakes

- Uninitialized variables
- Reusing variables carelessly

### Interview Notes

- Be able to explain declaration versus initialization

---

## 13. Data Types

### Definition

Data types define the kind of value a variable can store and how much memory it uses.

### Explanation

Common built-in types include `int`, `char`, `float`, `double`, `bool`, and derived forms like arrays and pointers.

### Best Practices

- Pick the smallest type that fits the problem without losing correctness

### Common Mistakes

- Using `int` where larger ranges are needed
- Confusing signed and unsigned behavior

### Interview Notes

- Know basic type sizes conceptually, not just by memorization

---

## 14. Literals

### Definition

Literals are fixed values written directly in code.

### Examples

```cpp
10
3.14
'A'
"Hello"
true
```

### Best Practices

- Use the correct literal form for the intended type

### Interview Notes

- Be able to differentiate integer, floating, character, and string literals

---

## 15. Constants

### Definition

Constants are values that should not change during execution.

### Syntax

```cpp
const int maxValue = 100;
```

### Internal Working

The compiler enforces read-only intent for constant values.

### Best Practices

- Prefer `const` for immutable values

### Common Mistakes

- Modifying constants
- Using magic numbers instead of named constants

### Interview Notes

- Explain why constants improve safety and readability

---

## 16. Keywords

### Definition

Keywords are reserved words with special meaning in C++.

### Examples

`int`, `return`, `if`, `while`, `class`, `const`

### Common Mistakes

- Using keywords as variable names

---

## 17. Identifiers

### Definition

Identifiers are names given to variables, functions, classes, and other program entities.

### Best Practices

- Use descriptive, consistent names
- Follow a naming convention

### Common Mistakes

- Using confusing abbreviations
- Creating names too similar to keywords

---

## 18. Namespaces

### Definition

Namespaces help organize code and prevent naming conflicts.

### Syntax

```cpp
namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}
```

### Best Practices

- Use namespaces to group related utilities

### Interview Notes

- Explain why `std` exists

---

## 19. Input and Output

### Definition

Input and output allow a program to communicate with the user or external systems.

### Syntax

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << x << endl;
}
```

### Internal Working

`cin` reads input from standard input and `cout` writes to standard output.

### Best Practices

- Validate input where needed
- Use `getline` when full-line input is required

### Common Mistakes

- Mixing `cin` and `getline` without handling the newline
- Forgetting flush behavior when needed

### Interview Notes

- Be ready to explain formatted input versus line-based input

---

## 20. Operators

### Definition

Operators perform actions on operands.

### Examples

- Arithmetic
- Relational
- Logical
- Bitwise
- Assignment
- Increment and decrement

### Best Practices

- Use parentheses when precedence is unclear

### Common Mistakes

- Assuming operator precedence incorrectly
- Confusing logical and bitwise operators

### Interview Notes

- Know operator categories and use cases

---

## 21. Expressions

### Definition

An expression is a combination of values, variables, and operators that produces a result.

### Example

```cpp
int sum = a + b * c;
```

### Best Practices

- Keep expressions readable

### Common Mistakes

- Writing overly complex one-line expressions

---

## 22. Type Conversion

### Definition

Type conversion changes a value from one type to another.

### Explanation

C++ may perform implicit conversion automatically or explicit conversion through casting.

### Syntax

```cpp
double x = 10;
int y = static_cast<int>(x);
```

### Best Practices

- Use explicit casts when intent matters

### Common Mistakes

- Relying on implicit conversion without checking precision loss

### Interview Notes

- Distinguish widening and narrowing conversions

---

## 23. Scope

### Definition

Scope is the region of a program where a name is accessible.

### Explanation

Local scope, block scope, file scope, and namespace scope are common forms.

### Best Practices

- Keep variables in the smallest practical scope

### Common Mistakes

- Shadowing variables unintentionally

### Interview Notes

- Explain why scope matters for readability and safety

---

## 24. Lifetime

### Definition

Lifetime is the duration for which an object exists in memory.

### Explanation

An object may live on the stack, heap, or static storage depending on how it is created.

### Memory Representation

```text
Stack object -> lives until block ends
Heap object  -> lives until delete
Static object -> lives for entire program
```

### Interview Notes

- Be able to explain why lifetime matters in memory safety

---

## 25. Storage Classes

### Definition

Storage classes describe how storage and visibility behave.

### Explanation

Examples include automatic, static, and external storage duration concepts.

### Interview Notes

- Know the difference between storage duration and scope

---

## 26. Control Flow

### Definition

Control flow determines the order in which statements execute.

### Explanation

It includes conditional execution and repeated execution.

### Best Practices

- Keep branching logic simple
- Avoid deep nesting when possible

### Interview Notes

- Explain how control flow changes program behavior

---

## 27. `if`

### Definition

`if` executes code only when a condition is true.

### Syntax

```cpp
if (x > 0) {
    cout << "Positive";
}
```

### Common Mistakes

- Forgetting braces in multi-line blocks

---

## 28. `switch`

### Definition

`switch` selects one branch from many based on a value.

### Best Practices

- Use `switch` for fixed-value branching

### Common Mistakes

- Forgetting `break`
- Using it for ranges instead of discrete values

---

## 29. Loops

### Definition

Loops repeat code while a condition remains valid.

### Types

- `for`
- `while`
- `do-while`

### Best Practices

- Choose the loop that best expresses the intent

### Common Mistakes

- Infinite loops
- Off-by-one errors

---

## 30. `break`

### Definition

`break` exits a loop or switch immediately.

### Interview Notes

- Useful for early termination when a condition is met

---

## 31. `continue`

### Definition

`continue` skips the remainder of the current loop iteration.

### Interview Notes

- Useful when only some iterations should do work

---

## 32. `goto`

### Definition

`goto` transfers control to a labeled statement.

### Explanation

It exists in C++, but it is generally discouraged in modern code except for educational understanding or rare low-level cases.

### Best Practices

- Avoid it in normal application code

### Interview Notes

- Mention that structured control flow is preferred

---

## 33. Functions

### Definition

A function is a reusable block of code that performs a specific task.

### Explanation

Functions improve modularity, readability, and reuse.

### Syntax

```cpp
int add(int a, int b) {
    return a + b;
}
```

### Internal Working

When called, a function receives arguments, creates a stack frame, runs, and then returns control to the caller.

### Diagram

```text
Caller -> Function call -> Stack frame created -> Execute -> Return value -> Caller resumes
```

### Best Practices

- Keep functions small and focused
- Use meaningful names
- Return a value when appropriate

### Common Mistakes

- Writing functions that do too many things
- Forgetting return statements

### Interview Notes

- Be able to explain function reuse and stack frames

---

## 34. Function Declaration

### Definition

A declaration tells the compiler that a function exists.

### Syntax

```cpp
int add(int, int);
```

### Interview Notes

- Declaration introduces the function signature

---

## 35. Function Definition

### Definition

A definition provides the function body.

### Syntax

```cpp
int add(int a, int b) {
    return a + b;
}
```

### Interview Notes

- Definition includes the actual logic

---

## 36. Function Prototype

### Definition

A function prototype is a declaration used before the function is defined or called.

### Best Practices

- Place prototypes in headers or before `main()` when needed

---

## 37. Function Overloading

### Definition

Function overloading allows multiple functions with the same name but different parameter lists.

### Syntax

```cpp
int add(int a, int b);
double add(double a, double b);
```

### Common Mistakes

- Overloading only by return type is not allowed

### Interview Notes

- Explain compile-time polymorphism

---

## 38. Inline Functions

### Definition

Inline functions suggest the compiler replace function calls with function body code when appropriate.

### Best Practices

- Use them for small, frequently called functions

### Common Mistakes

- Assuming the compiler must inline them

---

## 39. Default Arguments

### Definition

Default arguments let a function parameter have a fallback value.

### Syntax

```cpp
int add(int a, int b = 10);
```

### Best Practices

- Use them to simplify common calls

### Common Mistakes

- Creating ambiguous overloads

---

## 40. Command Line Arguments

### Definition

Command line arguments are values passed to a program when it starts.

### Syntax

```cpp
int main(int argc, char* argv[])
```

### Interview Notes

- Explain `argc` and `argv`

---

## 41. Basic Debugging

### Definition

Debugging is the process of finding and fixing errors in a program.

### Explanation

Basic debugging includes reading compiler messages, using print statements, tracing execution, and checking inputs and outputs.

### Best Practices

- Read errors carefully
- Reproduce bugs consistently
- Simplify the problem before fixing it

### Common Mistakes

- Guessing instead of tracing
- Ignoring compiler warnings

### Interview Notes

- Describe your debugging approach clearly

---

## 42. Assertions

### Definition

Assertions are checks used to verify assumptions during development.

### Syntax

```cpp
#include <cassert>
assert(x > 0);
```

### Best Practices

- Use assertions for internal logic checks

### Common Mistakes

- Using assertions as user-facing error handling

### Interview Notes

- Explain why assertions help during development and testing

---

## Summary

Phase 1 is about learning the language foundation, understanding the toolchain, and building confidence with small but complete programs.

Once these topics are clear, later phases like arrays, pointers, recursion, and OOP become much easier.

