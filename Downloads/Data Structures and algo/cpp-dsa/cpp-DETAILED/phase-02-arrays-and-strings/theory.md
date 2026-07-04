# 📚 Chapter 1: Arrays

> **"Arrays are the building blocks of Data Structures."**
>
> Before learning Linked Lists, Stacks, Queues, Trees, Graphs, Hashing, Dynamic Programming, or even STL containers like `vector`, every programmer must thoroughly understand arrays. Arrays are one of the oldest, fastest, and most fundamental data structures in computer science.

---

# 📑 Table of Contents

1. Introduction
2. Learning Objectives
3. Why Do We Need Arrays?
4. Definition
5. Evolution of Arrays
6. Real-World Analogy
7. Intuition
8. Characteristics of Arrays
9. Internal Working
10. Memory Representation
11. Address Calculation
12. Why Index Starts From 0
13. Contiguous Memory Allocation
14. Random Access
15. Cache Locality
16. Advantages
17. Limitations
18. Summary

---

# 📖 Introduction

Every program processes **data**.

For example,

- Student Management System stores marks.
- Banking Software stores account balances.
- Hospital Management System stores patient records.
- WhatsApp stores messages.
- Instagram stores posts.
- Amazon stores product details.

Imagine you need to store marks of **500 students**.

Without arrays, your code would look like this:

```cpp
int marks1;
int marks2;
int marks3;
int marks4;
...
int marks500;
```

This approach is:

- Difficult to read
- Difficult to maintain
- Impossible to scale
- Time-consuming
- Error-prone

Now imagine calculating the average.

```cpp
average =
(marks1 + marks2 + marks3 + ... + marks500) / 500;
```

Clearly, this is not practical.

Arrays solve this problem by allowing us to store multiple values under a **single variable name**.

```cpp
int marks[500];
```

Now,

```cpp
marks[0]
marks[1]
marks[2]
...
marks[499]
```

Every value is stored systematically and can be accessed efficiently.

This simple idea makes arrays one of the most important data structures in programming.

---

# 🎯 Learning Objectives

After completing this chapter, you will be able to

- Explain what an array is.
- Understand why arrays are needed.
- Visualize how arrays are stored in memory.
- Calculate addresses of array elements.
- Explain contiguous memory allocation.
- Understand random access.
- Explain why indexing starts from zero.
- Analyze the advantages and disadvantages of arrays.
- Build the foundation required for advanced data structures.

---

# 🤔 Why Do We Need Arrays?

Programming is about managing data efficiently.

Suppose a company stores the salaries of **10,000 employees**.

Without arrays,

```cpp
salary1
salary2
salary3
...
salary10000
```

Imagine updating every salary manually.

Now imagine finding the highest salary.

It becomes nearly impossible.

Arrays provide:

- Organized storage
- Easy access
- Easy traversal
- Better readability
- Faster computation

Using loops,

```cpp
for(int i=0;i<10000;i++)
{
    cout<<salary[i];
}
```

One loop replaces thousands of statements.

This is why arrays are indispensable.

---

# 📜 Definition

> **Array**
>
> An array is a **linear data structure** that stores a fixed number of elements of the same data type in **contiguous memory locations**. Each element is identified by a unique index.

### Key Points

- Linear Data Structure
- Homogeneous Data
- Fixed Size
- Contiguous Memory
- Index-Based Access
- Constant-Time Random Access

---

# 📜 Evolution of Arrays

Arrays have existed since the earliest programming languages.

Languages such as

- FORTRAN
- ALGOL
- C
- Pascal

introduced arrays as one of the primary methods for storing collections of data.

Modern languages still use arrays because they are

- Fast
- Memory Efficient
- Cache Friendly
- Easy to Implement

Even advanced containers like

- `std::vector`
- `std::string`
- Java Arrays
- Python Lists (internally dynamic arrays)

are built using the same fundamental concept.

---

# 🌍 Real-World Analogy

Imagine a train.

```text
+------+ +------+ +------+ +------+ +------+
| C1   | | C2   | | C3   | | C4   | | C5   |
+------+ +------+ +------+ +------+ +------+
```

Every compartment

- has a fixed position
- stores passengers
- is connected sequentially

Similarly,

```text
+----+----+----+----+----+
| 12 | 45 | 78 | 91 | 30 |
+----+----+----+----+----+
  0    1    2    3    4
```

Each box represents one element.

Each position is called the **index**.

---

# 🧠 Intuition

Think of an apartment building.

```text
Apartment Number

101
102
103
104
105
```

If someone asks,

> "Go to Apartment 104."

You don't search every apartment.

You directly go to Apartment 104.

Arrays work similarly.

Instead of searching,

the computer directly calculates the memory address.

This is why accessing

```cpp
arr[3]
```

takes constant time.

---

# 📋 Characteristics of Arrays

- Stores only one data type.
- Size is fixed after creation.
- Memory is contiguous.
- Supports direct indexing.
- Supports random access.
- Easy traversal.
- Efficient cache utilization.
- Insertion and deletion are expensive.

---

# 🏗 Internal Working

When you write

```cpp
int arr[5];
```

the compiler performs several operations.

### Step 1

Determine the size of one integer.

```text
sizeof(int) = 4 bytes
```

### Step 2

Calculate total memory required.

```text
5 × 4 = 20 bytes
```

### Step 3

Request a continuous memory block.

Suppose the operating system allocates memory starting from

```text
1000
```

Then memory becomes

```text
Address      Value

1000          ?

1004          ?

1008          ?

1012          ?

1016          ?
```

Notice

Every element occupies exactly four bytes.

There are **no gaps** between elements.

This property is called

> **Contiguous Memory Allocation**

---

# 💾 Memory Representation

```cpp
int arr[5]={10,20,30,40,50};
```

Memory

```text
Address

1000
+------+
| 10   |
+------+

1004
+------+
| 20   |
+------+

1008
+------+
| 30   |
+------+

1012
+------+
| 40   |
+------+

1016
+------+
| 50   |
+------+
```

Each element occupies

```text
sizeof(int)
```

bytes.

---

# 📐 Address Calculation

The compiler calculates addresses using a simple formula.

## Formula

```text
Address(arr[i])

=

Base Address

+

(Index × Size of Data Type)
```

Example

```cpp
int arr[5];
```

Base Address

```text
1000
```

Find

```text
arr[3]
```

Calculation

```text
1000 + (3 × 4)

=

1012
```

Therefore

```text
arr[3]

is stored at

1012
```

No searching is required.

This mathematical calculation makes arrays extremely fast.

---

# 🤔 Why Does Array Index Start From 0?

This is one of the most common interview questions.

Suppose

```text
Base Address = 1000
```

To access the first element,

```text
Address = Base + (0 × Size)

= Base
```

No additional computation.

If indexing started from 1,

```text
Address = Base + ((1-1) × Size)
```

Every access would require an extra subtraction.

Using zero-based indexing simplifies address calculation and improves efficiency.

---

# 📦 Contiguous Memory Allocation

Arrays require one continuous block of memory.

Example

```text
Correct

1000
1004
1008
1012
1016
```

Incorrect

```text
1000

2050

6000

8004
```

The second arrangement is **not an array** because the elements are scattered.

Contiguous memory enables

- Direct indexing
- Better cache performance
- Faster traversal

---

# 🚀 Random Access

Arrays support **Random Access**.

Random Access means

> Any element can be accessed directly without visiting previous elements.

Example

```cpp
cout<<arr[987];
```

The computer directly calculates its address.

No loop.

No traversal.

No searching.

This is why array access complexity is

```text
O(1)
```

---

# 🖥 Cache Locality

Modern CPUs use **Cache Memory**.

When one array element is loaded,

the CPU often loads nearby elements as well.

Since arrays store data continuously,

future accesses become much faster.

This is one reason arrays outperform many pointer-based data structures during traversal.

---

---

# 📝 Array Declaration

Array declaration tells the compiler to reserve a contiguous block of memory capable of storing multiple elements of the same data type.

## Syntax

```cpp
datatype arrayName[size];
```

### Components

| Component | Description |
|-----------|-------------|
| `datatype` | Type of elements stored |
| `arrayName` | Name of the array |
| `size` | Maximum number of elements |

### Example

```cpp
int marks[5];
```

Explanation:

- `int` → Every element is an integer.
- `marks` → Name of the array.
- `5` → Total capacity of the array.

Memory allocated:

```text
Index

0     1     2     3     4

+-----+-----+-----+-----+-----+
|  ?  |  ?  |  ?  |  ?  |  ?  |
+-----+-----+-----+-----+-----+
```

Initially, local array elements contain **garbage values** unless initialized.

---

# ⚠ Rules for Declaring Arrays

## Rule 1: Size must be positive

✔ Correct

```cpp
int arr[10];
```

❌ Wrong

```cpp
int arr[-5];
```

---

## Rule 2: Elements must have the same data type

✔ Correct

```cpp
int arr[5];
```

❌ Wrong

```cpp
int arr[5]={10,'A',3.14};
```

---

## Rule 3: Index starts from 0

For an array of size `n`

Valid indices are

```text
0 to n-1
```

Example

```cpp
int arr[5];
```

Valid

```cpp
arr[0]
arr[1]
arr[2]
arr[3]
arr[4]
```

Invalid

```cpp
arr[5]
```

Accessing an invalid index results in **Undefined Behaviour**.

---

# 📌 Types of Array Initialization

There are several ways to initialize an array.

---

## 1. Complete Initialization

Every element is initialized.

```cpp
int arr[5]={10,20,30,40,50};
```

Memory

```text
+----+----+----+----+----+
|10  |20  |30  |40  |50  |
+----+----+----+----+----+
```

---

## 2. Partial Initialization

```cpp
int arr[5]={10,20};
```

Remaining elements become **0**.

```text
+----+----+----+----+----+
|10  |20  |0   |0   |0   |
+----+----+----+----+----+
```

---

## 3. Zero Initialization

```cpp
int arr[5]={0};
```

Output

```text
0 0 0 0 0
```

---

## 4. Empty Initialization

```cpp
int arr[5]{};
```

All elements become

```text
0
```

(C++11 onwards)

---

## 5. Size Inference

Compiler automatically calculates the size.

```cpp
int arr[]={10,20,30,40,50};
```

Compiler creates

```cpp
int arr[5];
```

---

# 📖 Accessing Array Elements

Elements are accessed using their index.

## Syntax

```cpp
arrayName[index]
```

Example

```cpp
int marks[5]={90,80,75,60,95};

cout<<marks[0];
cout<<marks[2];
```

Output

```text
90
75
```

---

# ⚙ Internal Working of Array Access

Suppose

```cpp
int arr[5]={10,20,30,40,50};
```

Base Address

```text
1000
```

Need

```cpp
arr[3]
```

Compiler calculates

```text
1000+(3×4)

=

1012
```

Then reads

```text
1012
```

Value

```text
40
```

No searching is performed.

---

# 🧪 Dry Run

```cpp
int arr[]={5,10,15,20};

cout<<arr[2];
```

Execution

```text
Step 1

Array Created

+----+----+----+----+
|5   |10  |15  |20  |
+----+----+----+----+

Step 2

Need arr[2]

↓

Address Calculated

↓

Read Value

↓

15 Printed
```

Output

```text
15
```

---

# ⚠ Out of Bounds Access

Consider

```cpp
int arr[5];

cout<<arr[10];
```

This is **Undefined Behaviour**.

Possible outcomes:

- Program crashes.
- Garbage value printed.
- Works "sometimes" (dangerous).
- Memory corruption.

Never access beyond

```text
0

to

size-1
```

---

# 💡 Best Practices

- Always initialize arrays.
- Never access invalid indices.
- Use meaningful names.
- Prefer `std::array` or `std::vector` in modern C++ when appropriate.
- Avoid hardcoding indices repeatedly.

---

# ⚠ Common Mistakes

### Mistake 1

```cpp
int arr[5];

cout<<arr[5];
```

Reason:

`arr[5]` is outside the valid range.

Correct

```cpp
cout<<arr[4];
```

---

### Mistake 2

```cpp
int arr[3];

arr[3]=100;
```

Wrong because the highest valid index is

```text
2
```

---

### Mistake 3

```cpp
int arr[5];

cout<<arr[2];
```

If the array is not initialized, local variables contain garbage values.

Correct

```cpp
int arr[5]={0};
```

---

# 🧠 Interview Notes

### Q1. Why does array indexing start from 0?

Because the address of the first element is the base address itself:

```
Address = Base + (0 × Size)
```

---

### Q2. Can we change the size of an array after declaration?

No. The size of a built-in array is fixed at compile time.

---

### Q3. What happens if you access `arr[size]`?

It causes **Undefined Behaviour** because the index is out of bounds.

---

# 📝 Revision Notes

- Arrays have fixed size.
- Index starts at 0.
- Elements are accessed using indices.
- Local arrays are not automatically initialized.
- Accessing out-of-bounds elements is undefined behaviour.
- Complete, partial, zero, and inferred-size initialization are common initialization methods.

---

# 📌 Key Takeaways

- ✅ Arrays are declared using `datatype name[size]`.
- ✅ Initialization can be complete, partial, zero, or inferred.
- ✅ Array access uses direct address calculation.
- ✅ Valid indices range from `0` to `size-1`.
- ✅ Always initialize arrays and avoid out-of-bounds access.
