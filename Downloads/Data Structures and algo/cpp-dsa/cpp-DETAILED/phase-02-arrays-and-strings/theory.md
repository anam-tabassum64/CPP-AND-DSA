# Phase 2 - Theory

## Phase Map

| Chapter | Topics Covered |
| --- | --- |
| 1 | Arrays, Introduction, Need of Arrays, Memory Representation, Declaration, Initialization |
| 2 | Traversal, Updating, Insertion, Deletion, Searching, Copying, Passing to Functions, Returning Arrays |
| 3 | Static vs Dynamic Arrays, 2D Arrays, Multi-dimensional Arrays |
| 4 | Character Arrays, Null Character, C Strings, String Functions |
| 5 | `std::string`, Introduction, Memory, Constructors, Capacity, Modifiers, Iterators, Operations |
| 6 | Array Algorithms, Linear Search, Binary Search Intro, Reverse, Rotate, Frequency, Prefix Sum |
| 7 | String Algorithms, Reverse, Palindrome, Anagram, Character Frequency, Tokenization, Pattern Matching |
| 8 | Pattern Printing, Stars, Numbers, Alphabets, Hollow, Pyramid, Diamond |

---

# 1. Arrays

## Introduction

An array is a collection of elements of the same type stored in contiguous memory locations.

## Need of Arrays

- Store many values using one name
- Access elements quickly by index
- Keep data in a predictable memory layout
- Support loops, searching, and aggregation naturally

## Memory Representation

```text
index:   0   1   2   3   4
value:  [10][20][30][40][50]
```

The address of each next element is adjacent to the previous one, based on the element size.

## Declaration

```cpp
int arr[5];
```

## Initialization

```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

## Traversal

Traversal means visiting every element, usually with a loop.

## Updating

Updating means changing a value at a specific index.

## Insertion

Insertion in a fixed-size array means shifting elements to make space.

## Deletion

Deletion usually means shifting elements left to fill the gap.

## Searching

Searching means finding whether a value exists and where it is located.

## Copying

Copying means moving values from one array to another, element by element.

## Passing to Functions

- Arrays decay to pointers in function parameters
- The function receives access to the first element
- The size must usually be passed separately

## Returning Arrays

Raw arrays cannot be returned directly in the same simple way as scalar values. In practice, use:

- dynamic memory
- `std::array`
- `std::vector`
- `std::string` for text

## Static vs Dynamic Arrays

| Type | Storage | Size | Example |
| --- | --- | --- | --- |
| Static array | Stack or static storage | Fixed at compile time | `int a[5];` |
| Dynamic array | Heap | Chosen at runtime | `int* a = new int[n];` |

---

# 2. 2D Arrays

## Introduction

A 2D array stores data in rows and columns.

## Multi-dimensional Arrays

```cpp
int matrix[3][4];
```

## Memory Layout

C++ stores 2D arrays in row-major order.

```text
matrix[0][0], matrix[0][1], matrix[0][2], matrix[0][3]
matrix[1][0], matrix[1][1], matrix[1][2], matrix[1][3]
matrix[2][0], matrix[2][1], matrix[2][2], matrix[2][3]
```

## Common Operations

- Traverse row by row
- Traverse column by column
- Find row sum and column sum
- Print transpose
- Work with square and rectangular matrices

---

# 3. Character Arrays

## Introduction

A character array stores text as a sequence of characters.

## Null Character

The null character `'\0'` marks the end of a C-style string.

## C Strings

```cpp
char name[] = "C++";
```

This is stored as:

```text
C  +  +  \0
```

## String Functions

Common C-string utilities include:

- `strlen`
- `strcpy`
- `strcat`
- `strcmp`

These come from `<cstring>`.

---

# 4. `std::string`

## Introduction

`std::string` is the modern C++ string type.

## Memory

`std::string` manages memory automatically and grows as needed.

## Constructors

- Default constructor
- From C string
- From repeated characters
- From iterator ranges

## Capacity

Important capacity-related members include:

- `size()`
- `length()`
- `capacity()`
- `empty()`
- `reserve()`
- `shrink_to_fit()`

## Modifiers

- `append()`
- `push_back()`
- `pop_back()`
- `insert()`
- `erase()`
- `replace()`
- `clear()`

## Iterators

`std::string` supports iterators, so it can be used with algorithms and range-based loops.

## Operations

- Concatenation
- Comparison
- Substring extraction
- Searching
- Character access with `[]` and `at()`

---

# 5. Array Algorithms

## Linear Search

Check each element until the target is found.

## Binary Search Intro

Binary search works on sorted data and halves the search space each step.

## Reverse

Swap the first and last elements, then move inward.

## Rotate

Shift all elements left or right by a fixed number of positions.

## Frequency

Count how many times each value appears.

## Prefix Sum

Prefix sum stores cumulative sums to answer range queries efficiently.

---

# 6. String Algorithms

## Reverse

Swap characters from both ends toward the center.

## Palindrome

A palindrome reads the same forward and backward.

## Anagram

An anagram uses the same characters with the same counts in a different order.

## Character Frequency

Count each character occurrence.

## Tokenization

Split text into words or tokens using separators.

## Pattern Matching

Basic pattern matching checks whether a smaller string exists inside a larger string.

---

# 7. Pattern Printing

Patterns are a strong way to learn loops, conditions, spacing, and index logic.

## Stars

- Left triangle
- Right triangle
- Pyramid
- Diamond
- Butterfly

## Numbers

- Sequential numbers
- Repeated row numbers
- Pascal-style structures

## Alphabets

- Alphabet triangle
- Mirrored alphabet triangle

## Hollow

- Hollow square
- Hollow pyramid

## Pyramid and Diamond

- Centered pyramids
- Symmetric diamonds

---

# Key Concept Summary

| Topic | Core Idea |
| --- | --- |
| Arrays | Same-type elements in contiguous memory |
| 2D Arrays | Arrays of rows and columns |
| Character Arrays | Raw text storage ending with `\0` |
| `std::string` | Safe, dynamic string handling |
| Search | Find whether a value exists |
| Reverse | Swap opposite ends |
| Rotate | Shift positions cyclically |
| Frequency | Count occurrences |
| Prefix Sum | Store running totals |
| Patterns | Use nested loops with spacing logic |

