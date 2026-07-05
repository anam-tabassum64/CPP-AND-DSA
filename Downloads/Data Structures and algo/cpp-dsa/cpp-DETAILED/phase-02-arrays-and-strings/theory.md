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

---

# 🔄 Array Traversal

## 📖 Introduction

**Traversal** is the process of visiting each element of an array exactly once to perform a specific operation.

Traversal is one of the most frequently performed operations on arrays and forms the basis for searching, sorting, updating, counting, filtering, and many other algorithms.

Almost every algorithm involving arrays begins with traversal.

---

## 🎯 Learning Objectives

After completing this topic, you will be able to:

- Understand what traversal means.
- Traverse arrays using different types of loops.
- Print all array elements.
- Modify elements while traversing.
- Analyze traversal complexity.

---

## 🤔 Why Do We Need Traversal?

Suppose an array stores marks of students.

```cpp
int marks[]={85,92,78,95,88};
```

To display all marks, should we write

```cpp
cout<<marks[0];
cout<<marks[1];
cout<<marks[2];
cout<<marks[3];
cout<<marks[4];
```

No.

Imagine an array having 1,00,000 elements.

Writing one statement for each element is impossible.

Traversal solves this problem.

---

## 📜 Definition

> Array Traversal is the process of visiting every element of an array exactly once in a sequential order.

---

## 🧠 Intuition

Imagine checking attendance in a classroom.

```text
Student 1

↓

Student 2

↓

Student 3

↓

Student 4

↓

Student 5
```

The teacher visits every student exactly once.

Similarly,

```text
arr[0]

↓

arr[1]

↓

arr[2]

↓

arr[3]

↓

arr[4]
```

Every element is visited exactly once.

---

## 🔄 Flow of Traversal

```text
Start

↓

Initialize i = 0

↓

Is i < Size ?

↓

Yes

↓

Process arr[i]

↓

i++

↓

Repeat

↓

No

↓

Stop
```

---

## 📝 Traversal using For Loop

The most common method.

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
```

### Output

```text
10 20 30 40 50
```

---

## 📝 Traversal using While Loop

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};

    int i=0;

    while(i<5)
    {
        cout<<arr[i]<<" ";
        i++;
    }
}
```

Output

```text
10 20 30 40 50
```

---

## 📝 Traversal using Do-While Loop

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};

    int i=0;

    do
    {
        cout<<arr[i]<<" ";
        i++;
    }
    while(i<5);
}
```

---

## 📝 Traversal using Range-Based Loop

Introduced in C++11.

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};

    for(int x:arr)
    {
        cout<<x<<" ";
    }
}
```

Output

```text
10 20 30 40 50
```

---

## 🧪 Dry Run

```cpp
int arr[]={4,8,12};

for(int i=0;i<3;i++)
{
    cout<<arr[i];
}
```

### Execution

```text
i=0

↓

Print arr[0]

↓

4

↓

i=1

↓

Print arr[1]

↓

8

↓

i=2

↓

Print arr[2]

↓

12

↓

Loop Ends
```

Output

```text
4 8 12
```

---

## 📈 Time Complexity

| Operation | Complexity |
|-----------|------------|
| Traversal | O(n) |

Why?

Every element is visited once.

---

## 💾 Space Complexity

| Type | Complexity |
|------|------------|
| Auxiliary Space | O(1) |

No extra memory is used.

---

# ✏️ Updating Array Elements

## 📖 Introduction

Updating means replacing an existing value with a new value.

Unlike insertion or deletion, updating does not change the array size.

---

## 📜 Definition

Updating is the process of modifying the value stored at a particular index.

---

## 📝 Syntax

```cpp
arr[index]=newValue;
```

---

## Example

```cpp
int arr[]={10,20,30,40,50};

arr[2]=100;
```

Before

```text
10 20 30 40 50
```

After

```text
10 20 100 40 50
```

---

## 💻 Program

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};

    arr[3]=999;

    for(int x:arr)
    {
        cout<<x<<" ";
    }
}
```

Output

```text
10 20 30 999 50
```

---

## 🧪 Dry Run

Initially

```text
Index

0 1 2 3 4

Value

10 20 30 40 50
```

Operation

```cpp
arr[3]=999;
```

Memory becomes

```text
10 20 30 999 50
```

Only one element changes.

---

## 📈 Complexity

| Operation | Complexity |
|-----------|------------|
| Update | O(1) |

Reason

The address is calculated directly.

---

# ➕ Array Insertion

## 📖 Introduction

Arrays have fixed size.

Therefore, insertion is not as simple as linked lists.

To insert an element at a position, all elements after that position must be shifted one step to the right.

---

## 🤔 Why Shifting?

Suppose

```text
10 20 30 40 50
```

Insert

```text
99
```

at index

```text
2
```

Result

```text
10 20 99 30 40 50
```

Notice

30,40 and 50 moved one position ahead.

---

## 🔄 Flow

```text
Find Position

↓

Shift Elements Right

↓

Insert New Element

↓

Increase Size
```

---

## 💻 Program

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[10]={10,20,30,40,50};

    int size=5;

    int pos=2;

    int value=99;

    for(int i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos]=value;

    size++;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
```

Output

```text
10 20 99 30 40 50
```

---

## 🧪 Dry Run

Initially

```text
10 20 30 40 50
```

Shift

```text
50 →

40 →

30 →
```

After shifting

```text
10 20 _ 30 40 50
```

Insert

```text
99
```

Final

```text
10 20 99 30 40 50
```

---

## 📈 Complexity

| Case | Complexity |
|------|------------|
| Beginning | O(n) |
| Middle | O(n) |
| End | O(1) (if space available) |

---

## ⚠ Common Mistakes

❌ Forgetting to shift elements.

❌ Shifting from left to right instead of right to left.

❌ Not checking available capacity.

---

## 💡 Best Practices

- Always validate the insertion position.
- Ensure there is enough capacity.
- Shift elements from the end towards the insertion point.
- Update the logical size after insertion.

---

## 📝 Revision Notes

- Traversal visits every element once.
- Updating changes only the value at a given index.
- Insertion requires shifting elements to the right.
- Traversal complexity is **O(n)**.
- Updating complexity is **O(1)**.
- Insertion is generally **O(n)** due to shifting.

---

## 📌 Key Takeaways

- ✅ Traversal is the foundation of most array algorithms.
- ✅ Updating is a direct, constant-time operation.
- ✅ Insertion in arrays is expensive because elements may need to be shifted.
- ✅ Understanding traversal and insertion is essential before learning searching and sorting algorithms.

---

---

# ➖ Array Deletion

## 📖 Introduction

Deletion is the process of removing an element from an array. Since arrays store elements in **contiguous memory locations**, deleting an element creates an empty position. To maintain continuity, all subsequent elements are shifted one position to the left.

> **Note:** Deletion reduces the **logical size** of the array, not its allocated memory.

---

## 📜 Algorithm

1. Select the position to delete.
2. Shift all elements after that position one place to the left.
3. Decrease the logical size by one.

### Flow

```text
Delete Element
      │
      ▼
Shift Elements Left
      │
      ▼
Decrease Size
      │
      ▼
Updated Array
```

---

## 💻 Example

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[10]={10,20,30,40,50};
    int size=5;
    int pos=2;

    for(int i=pos;i<size-1;i++)
        arr[i]=arr[i+1];

    size--;

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
```

### Output

```text
10 20 40 50
```

---

## 📈 Complexity

| Operation | Time |
|-----------|------|
| Delete at Beginning | O(n) |
| Delete at Middle | O(n) |
| Delete at End | O(1) |

**Space Complexity:** `O(1)`

---

## 👍 Advantages

- Simple implementation.
- Preserves element order.
- No extra memory required.

---

## 👎 Disadvantages

- Expensive for large arrays.
- Requires shifting elements.
- Fixed-size arrays cannot shrink physically.

---

## 💡 Interview Tip

**Q. Why is deletion in arrays slower than in linked lists?**

**Answer:** Arrays require shifting elements after deletion, whereas linked lists only update pointers.

---

# 🔍 Searching

## 📖 Introduction

Searching is the process of finding whether a particular element exists in an array.

---

## Types of Searching

### 1. Linear Search

Checks each element one by one.

### 2. Binary Search

Works only on **sorted arrays** by repeatedly dividing the search space into halves.

---

# Linear Search

## Algorithm

1. Start from index `0`.
2. Compare each element with the target.
3. If found, return the index.
4. Otherwise continue.
5. If the loop ends, the element is not present.

---

## Flowchart

```text
Start
   │
   ▼
Compare Current Element
   │
   ▼
Found?
 ┌──┴──┐
 │     │
Yes    No
 │      │
 ▼      ▼
Return Next Element
 Index     │
      Repeat
```

---

## Example

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};
    int key=40;

    for(int i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Found at "<<i;
            return 0;
        }
    }

    cout<<"Not Found";
}
```

Output

```text
Found at 3
```

---

## Binary Search (Introduction)

Binary Search is a faster searching technique that works **only on sorted arrays**.

Instead of checking every element, it repeatedly compares the middle element with the target and eliminates half of the remaining elements.

Example

```text
10 20 30 40 50 60 70

Target = 60

Middle = 40

60 > 40

Search Right Half

↓

Middle = 60

Found
```

### Complexity

| Algorithm | Best | Worst |
|-----------|------|--------|
| Linear Search | O(1) | O(n) |
| Binary Search | O(1) | O(log n) |

---

# 📋 Copying Arrays

## 📖 Introduction

Copying an array means creating another array containing the same elements in the same order.

---

## Methods

### Using Loop

```cpp
int arr[]={1,2,3,4,5};
int copy[5];

for(int i=0;i<5;i++)
    copy[i]=arr[i];
```

### Using `std::copy()`

```cpp
copy(arr,arr+5,copyArr);
```

(Header: `<algorithm>`)

### Using `memcpy()`

```cpp
memcpy(copyArr,arr,sizeof(arr));
```

(Header: `<cstring>`)

---

## Complexity

| Method | Time |
|---------|------|
| Loop | O(n) |
| std::copy() | O(n) |
| memcpy() | O(n) |

---

## Best Practices

- Prefer `std::copy()` in modern C++.
- Use `memcpy()` only for trivially copyable data types.
- Ensure the destination array has enough capacity.

---

# 📤 Passing Arrays to Functions

## 📖 Introduction

When an array is passed to a function, it **decays into a pointer** to its first element. Therefore, the function receives the address of the first element, not a copy of the entire array.

---

## Syntax

```cpp
void display(int arr[],int n);
```

Equivalent to

```cpp
void display(int *arr,int n);
```

---

## Example

```cpp
#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={10,20,30,40,50};

    display(arr,5);
}
```

Output

```text
10 20 30 40 50
```

---

## Why Pass Size Separately?

Inside the function, the array becomes a pointer.

Therefore,

```cpp
sizeof(arr)
```

returns the size of the pointer, **not** the size of the original array.

Always pass the array size as a separate parameter.

---

## Complexity

Passing an array to a function takes **O(1)** time because only the address is passed, not the entire array.

---

## 📌 Quick Revision

- Array deletion shifts elements left.
- Linear Search works on any array.
- Binary Search requires a sorted array.
- Arrays can be copied using loops, `std::copy()`, or `memcpy()`.
- Arrays decay to pointers when passed to functions.
- Always pass the array size separately.
- Deletion: **O(n)**
- Linear Search: **O(n)**
- Binary Search: **O(log n)**
- Copying: **O(n)**
- Passing Arrays: **O(1)**

---

# 📚 Chapter 2: 2D Arrays & Multi-dimensional Arrays

---

# 📖 Introduction

A **2D Array** is an array of arrays used to store data in the form of **rows and columns** (matrix). It extends the concept of a one-dimensional array and is useful for representing tables, matrices, game boards, images, and spreadsheets.

A **Multi-dimensional Array** is an array having more than one dimension (2D, 3D, ...).

---

# 🎯 Why Do We Need 2D Arrays?

Using a 1D array to represent tabular data is difficult.

For example, marks of 3 students in 4 subjects:

| Student | Math | Science | English | C++ |
|---------|------|----------|----------|-----|
| A | 90 | 85 | 88 | 91 |
| B | 80 | 79 | 95 | 89 |
| C | 75 | 92 | 81 | 86 |

A 2D array stores this naturally.

---

# 📜 Declaration

```cpp
dataType arrayName[rows][columns];
```

Example

```cpp
int matrix[3][4];
```

---

# 📝 Initialization

```cpp
int matrix[2][3]={
    {1,2,3},
    {4,5,6}
};
```

Or

```cpp
int matrix[][3]={
    {1,2,3},
    {4,5,6}
};
```

---

# 💾 Memory Representation

Although a 2D array looks like a table, it is stored in **contiguous memory** using **Row-Major Order**.

```text
Matrix

1 2 3
4 5 6

Memory

+----+----+----+----+----+----+
| 1  | 2  | 3  | 4  | 5  | 6  |
+----+----+----+----+----+----+
```

### Address Formula (Row-Major)

```text
Address = Base + ((Row × Number_of_Columns) + Column) × Size
```

---

# 🔄 Traversing a 2D Array

Use nested loops.

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[2][3]={
        {1,2,3},
        {4,5,6}
    };

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
```

Output

```text
1 2 3
4 5 6
```

---

# ✏️ Common Matrix Operations

## Row-wise Traversal

```cpp
for(int i=0;i<rows;i++)
    for(int j=0;j<cols;j++)
        cout<<arr[i][j];
```

---

## Column-wise Traversal

```cpp
for(int j=0;j<cols;j++)
    for(int i=0;i<rows;i++)
        cout<<arr[i][j];
```

---

## Matrix Addition

```cpp
C[i][j]=A[i][j]+B[i][j];
```

---

## Matrix Transpose

Swap rows and columns.

```text
1 2 3

4 5 6

↓

1 4

2 5

3 6
```

---

## Matrix Multiplication

For two matrices:

```text
A(m×n)

×

B(n×p)

=

C(m×p)
```

---

# 📤 Passing 2D Arrays to Functions

```cpp
void display(int arr[][3],int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
```

> **Note:** The number of columns must be specified when passing a built-in 2D array.

---

# 🌍 Applications

- Matrix calculations
- Image processing
- Sudoku solver
- Chess board representation
- Spreadsheet software
- Game development
- Scientific computing
- Graph adjacency matrix

---

# 📈 Complexity

| Operation | Time |
|-----------|------|
| Access Element | O(1) |
| Traversal | O(rows × cols) |
| Addition | O(rows × cols) |
| Transpose | O(rows × cols) |
| Matrix Multiplication | O(n³) *(Basic Algorithm)* |

**Space Complexity:** `O(rows × cols)`

---

# 👍 Advantages

- Easy representation of tabular data.
- Fast random access using indices.
- Contiguous memory improves cache performance.
- Simple implementation.

---

# 👎 Disadvantages

- Fixed size.
- Insertion and deletion are expensive.
- Wastage of memory if dimensions are overestimated.
- Difficult to resize dynamically.

---

# 💡 Best Practices

- Use nested loops for traversal.
- Validate row and column indices.
- Prefer `std::vector<vector<int>>` when size is dynamic.
- Use meaningful variable names like `rows` and `cols`.

---

# 🧠 Interview Notes

### Why are 2D arrays stored in Row-Major Order?

Because C++ stores array elements row by row in contiguous memory.

---

### Difference between 1D and 2D Arrays

| 1D Array | 2D Array |
|-----------|-----------|
| Stores data in one dimension | Stores data in rows and columns |
| Single index | Two indices |
| Simple list | Matrix/Table |

---

### Can a 2D array be passed to a function?

✔ Yes, but the **column size must be known** for built-in arrays.

---

# 📝 Revision Notes

- A 2D array is an array of arrays.
- Elements are stored in **Row-Major Order**.
- Traversal requires nested loops.
- Matrix operations include addition, transpose, and multiplication.
- Accessing any element takes **O(1)** time.
- Traversing the entire matrix takes **O(rows × cols)** time.
- Use `vector<vector<int>>` for dynamically sized matrices.

---

# 📌 Key Takeaways

- ✅ 2D arrays efficiently represent matrices and tables.
- ✅ Memory is contiguous despite the row-column view.
- ✅ Nested loops are used for traversal.
- ✅ Row-major order is important for memory layout and interview questions.
- ✅ 2D arrays are widely used in graphics, games, scientific computing, and competitive programming.

---

# 📚 Chapter 3: Character Arrays & C Strings

---

# 📖 Introduction

A **Character Array** is an array whose elements are of type `char`. It is used to store a sequence of characters such as words, sentences, or symbols.

A **C String** is a character array that ends with a special character called the **Null Character (`'\0'`)**, which marks the end of the string.

Character arrays were the primary way of handling text before the introduction of `std::string` in C++.

---

# 🎯 Why Do We Need Character Arrays?

Character arrays are useful for:

- Storing text and words
- Processing user input
- File handling
- Command-line arguments
- Working with legacy C libraries
- String manipulation

---

# 📜 Declaration

### Character Array

```cpp
char name[10];
```

### C String

```cpp
char name[]="Cassie";
```

---

# 📝 Initialization

```cpp
char city[]="Delhi";
```

Equivalent to

```cpp
char city[]={'D','e','l','h','i','\0'};
```

---

# 💾 Memory Representation

```cpp
char name[]="Code";
```

Stored in memory as

```text
Index : 0   1   2   3   4

Value : C   o   d   e  \0
```

The **Null Character (`'\0'`)** tells the compiler where the string ends.

Without it, the program may print garbage values.

---

# ⚠ Null Character

```cpp
'\0'
```

- ASCII Value = **0**
- Indicates the end of a C String.
- Automatically added when using string literals.

Example

```cpp
char str[]="Hello";
```

Actually stored as

```text
H e l l o \0
```

---

# ✏ Accessing Characters

Characters are accessed using indices.

```cpp
char word[]="Hello";

cout<<word[0];
cout<<word[4];
```

Output

```text
H
o
```

---

# 🔄 Traversing a Character Array

```cpp
#include<iostream>
using namespace std;

int main()
{
    char str[]="Programming";

    for(int i=0;str[i]!='\0';i++)
        cout<<str[i]<<" ";
}
```

Output

```text
P r o g r a m m i n g
```

---

# 📚 Common C String Functions

Header File

```cpp
#include<cstring>
```

| Function | Description |
|----------|-------------|
| `strlen()` | Returns string length |
| `strcpy()` | Copies one string to another |
| `strcat()` | Concatenates two strings |
| `strcmp()` | Compares two strings |
| `strchr()` | Finds first occurrence of a character |
| `strstr()` | Finds a substring |

---

## Example

```cpp
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[]="Computer";

    cout<<strlen(str);
}
```

Output

```text
8
```

---

# ⚠ Buffer Overflow

A buffer overflow occurs when input exceeds the array size.

Example

```cpp
char name[5];

cin>>name;
```

Input

```text
Programming
```

This may overwrite memory and cause undefined behavior.

Use larger arrays or `std::string` to avoid this problem.

---

# 🌍 Applications

- Password validation
- Text processing
- File handling
- Lexical analysis
- Command-line arguments
- Embedded systems
- Legacy C programs

---

# 📈 Complexity

| Operation | Time |
|-----------|------|
| Access Character | O(1) |
| Traversal | O(n) |
| strlen() | O(n) |
| strcpy() | O(n) |
| strcat() | O(n) |
| strcmp() | O(n) |

Space Complexity

```text
O(n)
```

---

# 👍 Advantages

- Simple and memory efficient.
- Fast character access.
- Compatible with C libraries.
- Suitable for low-level programming.

---

# 👎 Disadvantages

- Fixed size.
- Manual memory management.
- Buffer overflow risk.
- Limited built-in functionality compared to `std::string`.

---

# 💡 Best Practices

- Always leave space for the null character.
- Include `<cstring>` for string functions.
- Validate user input length.
- Prefer `std::string` for modern C++ applications.
- Avoid deprecated functions like `gets()`.

---

# 🧠 Interview Notes

### Difference between Character Array and C String

| Character Array | C String |
|-----------------|----------|
| Array of characters | Character array ending with `'\0'` |
| May not contain null character | Always ends with `'\0'` |
| Not necessarily a string | Represents a valid string |

---

### Difference between C String and `std::string`

| C String | std::string |
|-----------|-------------|
| Fixed size | Dynamic size |
| Uses `char[]` | Uses `string` class |
| Manual operations | Rich built-in functions |
| Less safe | Safer and easier |

---

# ❓ FAQs

### Why is the null character important?

It marks the end of the string. Without it, functions like `strlen()` and `cout` cannot determine where the string ends.

---

### Which header contains string functions?

```cpp
<cstring>
```

---

### Can a character array store spaces?

Using `cin` → ❌ No

Using `getline()` → ✔ Yes

---

# 📝 Revision Notes

- Character arrays store characters.
- C Strings always end with `'\0'`.
- `<cstring>` provides built-in string functions.
- `strlen()` returns the string length.
- Character arrays have fixed size.
- Buffer overflow occurs when input exceeds array capacity.
- Prefer `std::string` for modern C++ programs.

---

# 📌 Key Takeaways

- ✅ Character arrays are the foundation of text handling in C/C++.
- ✅ Every C String ends with a null character.
- ✅ `<cstring>` provides useful string manipulation functions.
- ✅ Character arrays are fast but less safe than `std::string`.
- ✅ Understanding C Strings is important for interviews, competitive programming, and system-level programming.

---
