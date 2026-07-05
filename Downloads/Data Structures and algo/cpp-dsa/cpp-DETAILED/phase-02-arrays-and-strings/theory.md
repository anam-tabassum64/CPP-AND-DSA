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
# 📚 Chapter 4: `std::string` in C++

---

# 📖 Introduction

`std::string` is a **Standard Template Library (STL)** class introduced in C++ to simplify string handling. Unlike character arrays, `std::string` automatically manages memory, supports dynamic resizing, and provides numerous built-in functions for efficient text manipulation.

It is defined in the `<string>` header file and belongs to the `std` namespace.

```cpp
#include <string>
using namespace std;
```

---

# 🎯 Why Use `std::string`?

Character arrays have several limitations:

- Fixed size
- Manual memory management
- Risk of buffer overflow
- Limited built-in functions

`std::string` overcomes these issues by providing:

- Dynamic resizing
- Automatic memory management
- Rich built-in functions
- Easy concatenation and comparison
- Safe string manipulation

---

# 📜 Declaration & Initialization

## Declaration

```cpp
string name;
```

## Initialization

```cpp
string name = "Cassie";

string city("Hyderabad");

string stars(5,'*');
```

Output

```text
*****
```

---

# 🏗 Memory Management

Unlike character arrays, `std::string` automatically allocates and deallocates memory.

```text
String Object

↓

Stores Pointer

↓

Heap Memory

↓

Actual Characters
```

Whenever the string grows, memory is automatically reallocated.

---

# 📚 Constructors

| Constructor | Example |
|------------|---------|
| Default | `string s;` |
| From Literal | `string s="Hello";` |
| Copy | `string s2(s1);` |
| Repeated Character | `string s(5,'A');` |
| Substring | `string s(str,2,4);` |

---

# 📏 Capacity Functions

| Function | Description |
|----------|-------------|
| `size()` | Number of characters |
| `length()` | Same as size() |
| `capacity()` | Allocated memory |
| `empty()` | Checks if empty |
| `clear()` | Removes all characters |
| `reserve()` | Reserves memory |
| `shrink_to_fit()` | Reduces unused capacity |

Example

```cpp
string s="Programming";

cout<<s.length();
cout<<s.capacity();
```

---

# ✏ Character Access

```cpp
string s="Hello";

cout<<s[0];

cout<<s.at(1);

cout<<s.front();

cout<<s.back();
```

Output

```text
H
e
H
o
```

---

# 🔧 Modification Functions

| Function | Purpose |
|----------|---------|
| `append()` | Add text |
| `push_back()` | Add one character |
| `pop_back()` | Remove last character |
| `insert()` | Insert text |
| `erase()` | Delete characters |
| `replace()` | Replace substring |
| `clear()` | Remove all characters |

Example

```cpp
string s="Code";

s.append("Chef");

cout<<s;
```

Output

```text
CodeChef
```

---

# 🔍 Searching Functions

| Function | Purpose |
|----------|---------|
| `find()` | Find substring |
| `rfind()` | Search from right |
| `substr()` | Extract substring |
| `compare()` | Compare strings |

Example

```cpp
string s="Programming";

cout<<s.find("gram");
```

Output

```text
3
```

---

# 🔄 String Operations

## Concatenation

```cpp
string a="Hello";

string b="World";

cout<<a+" "+b;
```

Output

```text
Hello World
```

---

## Comparison

```cpp
if(a==b)
```

Lexicographical comparison

```cpp
if(a<b)
```

---

## Iterating through String

```cpp
for(char c:s)
    cout<<c<<" ";
```

Output

```text
H e l l o
```

---

# 🌍 Applications

- Text editors
- Search engines
- File handling
- Compilers
- Web development
- Chat applications
- Data processing
- Competitive Programming

---

# 📈 Complexity

| Operation | Complexity |
|-----------|------------|
| Access | O(1) |
| size() | O(1) |
| append() | O(n) |
| insert() | O(n) |
| erase() | O(n) |
| find() | O(n) |
| substr() | O(n) |
| compare() | O(n) |

Space Complexity

```text
O(n)
```

---

# ⚖ Character Array vs `std::string`

| Character Array | `std::string` |
|-----------------|---------------|
| Fixed Size | Dynamic Size |
| Manual Memory | Automatic Memory |
| Less Safe | Safer |
| Few Functions | Rich Built-in Functions |
| Buffer Overflow Possible | Much Safer |

---

# 👍 Advantages

- Dynamic size
- Easy to use
- Automatic memory management
- Rich library support
- STL compatible
- Safe operations

---

# 👎 Disadvantages

- Slightly slower than raw character arrays
- More memory overhead
- Not ideal for very low-level programming

---

# 💡 Best Practices

- Include `<string>` header.
- Prefer `getline()` for input containing spaces.
- Use `const string&` when passing large strings to functions.
- Use `size()` instead of manually counting characters.
- Avoid unnecessary string copies.

---

# 🧠 Interview Notes

### Difference between `size()` and `length()`

There is **no difference**.

Both return the number of characters.

---

### Why is `std::string` preferred over Character Arrays?

Because it

- automatically manages memory,
- resizes dynamically,
- provides many useful functions,
- reduces programming errors.

---

### Difference between `[]` and `at()`

| `[]` | `at()` |
|-------|---------|
| No bounds checking | Performs bounds checking |
| Faster | Safer |

---

# ❓ FAQs

### Which header file contains `std::string`?

```cpp
<string>
```

---

### Can `std::string` store spaces?

✔ Yes

```cpp
getline(cin,str);
```

---

### Is `std::string` mutable?

✔ Yes, characters can be modified.

---

# 📝 Revision Notes

- `std::string` is a dynamic string class.
- Defined in `<string>`.
- Automatically manages memory.
- Supports concatenation, searching, insertion, deletion, and comparison.
- `size()` and `length()` are identical.
- Use `getline()` to read complete lines.
- Prefer `std::string` over character arrays in modern C++.

---

# 📌 Key Takeaways

- ✅ `std::string` is the standard way to handle text in modern C++.
- ✅ It eliminates many problems associated with character arrays.
- ✅ Rich built-in functions simplify string manipulation.
- ✅ Dynamic memory allocation makes it flexible and safe.
- ✅ Frequently asked in coding interviews and competitive programming.

---
# 📚 Chapter 5: Array Algorithms

---

# 📖 Introduction

Array algorithms are techniques used to efficiently process, manipulate, and solve problems involving arrays. They form the foundation of Data Structures & Algorithms (DSA) and are frequently asked in coding interviews, competitive programming, and technical assessments.

The most common array algorithms include searching, reversing, rotating, prefix sums, frequency counting, and introductory optimization techniques.

---

# 🎯 Why Learn Array Algorithms?

Array algorithms help to:

- Search elements efficiently.
- Rearrange data.
- Optimize repeated calculations.
- Solve interview problems.
- Improve logical thinking.
- Build a strong DSA foundation.

---

# 🔍 1. Linear Search

Linear Search checks every element one by one until the target is found.

### Example

```cpp
int arr[]={10,20,30,40,50};
int key=40;

for(int i=0;i<5;i++)
{
    if(arr[i]==key)
    {
        cout<<"Found";
        break;
    }
}
```

### Complexity

| Best | Average | Worst |
|------|----------|--------|
| O(1) | O(n) | O(n) |

---

# ⚡ 2. Binary Search (Introduction)

Binary Search works **only on sorted arrays**. It repeatedly divides the search space into half.

Example

```text
10 20 30 40 50 60 70

Target = 60

↓

Middle = 40

↓

Search Right Half

↓

Found
```

### Complexity

| Best | Average | Worst |
|------|----------|--------|
| O(1) | O(log n) | O(log n) |

---

# 🔄 3. Reverse an Array

Reverse changes the order of elements.

Example

```text
1 2 3 4 5

↓

5 4 3 2 1
```

### Two Pointer Approach

```cpp
int left=0,right=n-1;

while(left<right)
{
    swap(arr[left],arr[right]);
    left++;
    right--;
}
```

### Complexity

Time: **O(n)**

Space: **O(1)**

---

# 🔃 4. Rotate an Array

Rotation shifts elements left or right.

Example

```text
1 2 3 4 5

Left Rotate

2 3 4 5 1
```

```text
1 2 3 4 5

Right Rotate

5 1 2 3 4
```

### Complexity

Time: **O(n)**

Space: **O(1)** *(using reversal algorithm)*

---

# 📊 5. Frequency Count

Frequency counting determines how many times each element appears.

Example

```text
Array

1 2 2 3 3 3

Frequency

1 → 1

2 → 2

3 → 3
```

Using Hash Map

```cpp
unordered_map<int,int> freq;

for(int x:arr)
    freq[x]++;
```

### Complexity

Time: **O(n)**

Space: **O(n)**

---

# ➕ 6. Prefix Sum

Prefix Sum stores cumulative sums to answer range sum queries efficiently.

Example

```text
Array

2 4 6 8

Prefix

2 6 12 20
```

Formula

```text
prefix[i]=prefix[i-1]+arr[i]
```

Applications

- Range Sum Queries
- Competitive Programming
- Dynamic Programming

### Complexity

Construction → **O(n)**

Query → **O(1)**

---

# 🚀 7. Kadane's Algorithm (Introduction)

Kadane's Algorithm finds the **Maximum Sum Subarray**.

Example

```text
-2 1 -3 4 -1 2 1

Maximum Sum = 6
```

Idea

- Extend current subarray if beneficial.
- Otherwise start a new subarray.

### Complexity

Time: **O(n)**

Space: **O(1)**

---

# 👥 8. Two Pointer Technique (Introduction)

Uses two indices moving toward each other.

Applications

- Reverse Array
- Pair Sum
- Remove Duplicates
- Sorted Arrays

Example

```cpp
left=0;

right=n-1;
```

### Complexity

Generally

```text
O(n)
```

---

# 📈 Complexity Summary

| Algorithm | Time | Space |
|------------|------|-------|
| Linear Search | O(n) | O(1) |
| Binary Search | O(log n) | O(1) |
| Reverse Array | O(n) | O(1) |
| Rotate Array | O(n) | O(1) |
| Frequency Count | O(n) | O(n) |
| Prefix Sum | O(n) | O(n) |
| Kadane | O(n) | O(1) |
| Two Pointer | O(n) | O(1) |

---

# 🌍 Applications

- Search Engines
- Database Queries
- Image Processing
- Data Analytics
- Competitive Programming
- Financial Analysis
- Scheduling Systems

---

# 💡 Best Practices

- Choose Binary Search only for sorted arrays.
- Use Prefix Sum for repeated range queries.
- Use Hash Maps for frequency counting.
- Prefer Two Pointer technique when possible.
- Analyze time complexity before coding.

---

# 🧠 Interview Notes

### Most Asked Questions

- Reverse an Array
- Rotate an Array
- Maximum Subarray Sum
- Move Zeroes
- Two Sum
- Majority Element
- Best Time to Buy and Sell Stock
- Prefix Sum Problems

---

# ❓ FAQs

### Why is Binary Search faster?

Because it eliminates half of the search space in every iteration.

---

### When should Prefix Sum be used?

Whenever multiple range sum queries are performed.

---

### Why is Kadane's Algorithm important?

It solves Maximum Subarray Sum in **O(n)** instead of **O(n²)**.

---

# 📝 Revision Notes

- Linear Search works on all arrays.
- Binary Search requires sorted arrays.
- Reverse uses Two Pointers.
- Rotate shifts elements.
- Prefix Sum speeds up range queries.
- Kadane finds maximum subarray sum.
- Frequency Count uses Hash Maps.

---

# 📌 Key Takeaways

- ✅ Array algorithms are the building blocks of DSA.
- ✅ Binary Search is one of the fastest searching algorithms.
- ✅ Prefix Sum and Kadane are among the most frequently asked interview topics.
- ✅ Two Pointer technique simplifies many array problems.
- ✅ Mastering these algorithms greatly improves problem-solving skills.

---
# 📚 Chapter 6: String Algorithms

---

# 📖 Introduction

String algorithms are techniques used to process, analyze, and manipulate text efficiently. They are widely used in search engines, text editors, compilers, cybersecurity, bioinformatics, competitive programming, and coding interviews.

Understanding these algorithms improves problem-solving skills and prepares you for advanced topics like pattern matching and dynamic programming.

---

# 🎯 Why Learn String Algorithms?

String algorithms help to:

- Search text efficiently.
- Validate user input.
- Compare strings.
- Process large text data.
- Solve interview problems.
- Build advanced applications like search engines and spell checkers.

---

# 🔄 1. Reverse a String

Reversing a string means changing the order of its characters.

### Example

```text
Original

Programming

↓

Reversed

gnimmargorP
```

### Using Two Pointers

```cpp
string str="Programming";

int left=0,right=str.length()-1;

while(left<right)
{
    swap(str[left],str[right]);
    left++;
    right--;
}

cout<<str;
```

### Complexity

| Time | Space |
|------|-------|
| O(n) | O(1) |

---

# 🔍 2. Palindrome

A palindrome reads the same from both directions.

Examples

```text
madam ✔

racecar ✔

level ✔

hello ✖
```

### Approach

Compare the first and last characters while moving toward the center.

### Complexity

Time: **O(n)**

Space: **O(1)**

---

# 🔤 3. Anagram

Two strings are anagrams if they contain the same characters with the same frequency, regardless of order.

Example

```text
listen

silent ✔

triangle

integral ✔
```

### Common Approaches

- Sorting both strings
- Frequency counting using arrays or hash maps

### Complexity

Sorting Approach → **O(n log n)**

Frequency Array → **O(n)**

---

# 📊 4. Character Frequency

Counts the number of occurrences of each character.

Example

```text
banana

a → 3

b → 1

n → 2
```

### Using Hash Map

```cpp
unordered_map<char,int> freq;

for(char ch:str)
    freq[ch]++;
```

### Complexity

Time → **O(n)**

Space → **O(n)**

---

# ✂ 5. Tokenization

Tokenization is the process of splitting a string into smaller parts (tokens) using delimiters.

Example

```text
Input

C++,Python,Java

↓

Tokens

C++

Python

Java
```

### Applications

- CSV Processing
- Command Parsing
- Text Analysis
- Compilers

---

# 🔎 6. Pattern Matching (Introduction)

Pattern Matching determines whether a pattern exists inside another string.

Example

```text
Text

Programming in C++

Pattern

gram

↓

Found ✔
```

### Basic Methods

- Naive Search
- `find()` Function
- KMP (Advanced)
- Rabin-Karp (Advanced)

---

# 🚀 7. KMP Algorithm (Introduction)

The **Knuth-Morris-Pratt (KMP)** algorithm improves pattern searching by avoiding unnecessary comparisons using the **LPS (Longest Prefix Suffix)** array.

### Complexity

| Time | Space |
|------|-------|
| O(n + m) | O(m) |

Where:

- `n` = Length of text
- `m` = Length of pattern

---

# ⚡ 8. Rabin-Karp Algorithm (Introduction)

Rabin-Karp uses **Hashing** to search for patterns efficiently.

Instead of comparing characters directly, it compares hash values.

Applications

- Multiple Pattern Searching
- Plagiarism Detection
- DNA Sequence Matching

### Complexity

Average → **O(n + m)**

Worst → **O(n × m)**

---

# 📈 Complexity Summary

| Algorithm | Time | Space |
|-----------|------|-------|
| Reverse String | O(n) | O(1) |
| Palindrome Check | O(n) | O(1) |
| Anagram | O(n) / O(n log n) | O(n) |
| Character Frequency | O(n) | O(n) |
| Tokenization | O(n) | O(n) |
| Pattern Matching (Naive) | O(n×m) | O(1) |
| KMP | O(n+m) | O(m) |
| Rabin-Karp | O(n+m)* | O(1) |

---

# 🌍 Real-World Applications

- Search Engines
- Auto-complete Systems
- Spell Checkers
- Chat Applications
- Text Editors
- DNA Sequence Analysis
- Cybersecurity
- Compilers
- Natural Language Processing (NLP)

---

# 💡 Best Practices

- Use `std::string` instead of character arrays.
- Prefer frequency counting for anagram problems.
- Use KMP for large pattern-matching tasks.
- Normalize text (lowercase/remove spaces) before comparisons.
- Analyze time complexity before selecting an algorithm.

---

# 🧠 Interview Notes

### Frequently Asked Questions

- Reverse a String
- Check Palindrome
- Valid Anagram
- First Unique Character
- Longest Common Prefix
- Implement `strStr()`
- Longest Substring Without Repeating Characters
- Group Anagrams

---

# ❓ FAQs

### Which algorithm is best for pattern matching?

- Small input → Naive Search
- Large input → KMP
- Multiple patterns → Rabin-Karp

---

### Which algorithm is best for checking anagrams?

Using a frequency array or hash map gives **O(n)** time complexity.

---

### Why is KMP faster than Naive Search?

Because it avoids rechecking previously matched characters using the **LPS array**.

---


---
# 📚 Chapter 7: Pattern Printing

---

# 📖 Introduction

Pattern Printing is one of the best ways to master **loops, nested loops, conditions, and logical thinking**. Although pattern questions are rarely asked directly in interviews, they build the problem-solving skills required for Data Structures & Algorithms (DSA).

Patterns involve arranging characters, numbers, or symbols in a specific format by controlling rows, columns, and spaces.

---

# 🎯 Why Learn Pattern Printing?

Pattern printing helps you:

- Strengthen loop concepts.
- Improve logical thinking.
- Understand nested loops.
- Visualize program execution.
- Build confidence for solving complex DSA problems.

---

# 🧠 Basic Logic Behind Patterns

Most patterns follow this structure:

```cpp
for(int i=1;i<=rows;i++)
{
    for(int j=1;j<=columns;j++)
    {
        // Print element
    }

    cout<<endl;
}
```

### Key Components

- Outer Loop → Controls **Rows**
- Inner Loop → Controls **Columns**
- Conditions → Decide what to print
- Spaces → Used for alignment

---

# ⭐ Star Patterns

## Left Triangle

```text
*
**
***
****
*****
```

Logic

```cpp
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
        cout<<"*";
    cout<<endl;
}
```

---

## Right Triangle

```text
    *
   **
  ***
 ****
*****
```

---

## Pyramid

```text
    *
   ***
  *****
 *******
*********
```

---

## Diamond

```text
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```

---

## Butterfly Pattern

```text
*      *
**    **
***  ***
********
***  ***
**    **
*      *
```

---

# 🔢 Number Patterns

## Increasing Numbers

```text
1
12
123
1234
12345
```

---

## Same Number

```text
1
22
333
4444
55555
```

---

## Floyd's Triangle

```text
1
2 3
4 5 6
7 8 9 10
```

---

## Pascal's Triangle (Introduction)

```text
      1
     1 1
    1 2 1
   1 3 3 1
```

Used in:

- Combinatorics
- Binomial Expansion

---

# 🔤 Alphabet Patterns

```text
A
AB
ABC
ABCD
ABCDE
```

---

```text
A
BB
CCC
DDDD
EEEEE
```

---

# ⬜ Hollow Patterns

## Hollow Square

```text
*****
*   *
*   *
*   *
*****
```

---

## Hollow Pyramid

```text
    *
   * *
  *   *
 *******
```

---

# 🏗 Pyramid Variations

- Half Pyramid
- Inverted Pyramid
- Full Pyramid
- Hollow Pyramid
- Mirrored Pyramid

---

# 📈 Complexity

For most patterns

| Operation | Complexity |
|-----------|------------|
| Time | O(n²) |
| Space | O(1) |

Where **n** is the number of rows.

---

# 🌍 Applications

Although patterns themselves are rarely used directly, the logic behind them is applied in:

- Computer Graphics
- Matrix Problems
- Game Development
- Image Processing
- UI Rendering
- Simulation Systems

---

# 💡 Best Practices

- Draw the pattern before coding.
- Identify rows and columns.
- Handle spaces first for aligned patterns.
- Solve simple patterns before advanced ones.
- Practice regularly to improve logical thinking.

---

# ⚠ Common Mistakes

- Incorrect loop limits.
- Forgetting `cout << endl`.
- Printing extra spaces.
- Mixing row and column logic.
- Infinite loops due to incorrect conditions.

---

# 🧠 Interview Notes

Interviewers may ask pattern questions to evaluate:

- Loop understanding.
- Nested loop concepts.
- Logical thinking.
- Code readability.
- Problem-solving ability.

---

# ❓ FAQs

### Are pattern questions important?

Yes. They improve programming logic and help build confidence for solving DSA problems.

---

### Which concepts are mainly used?

- Loops
- Nested Loops
- Conditions
- Variables
- Mathematical logic

---

### Is pattern printing useful in competitive programming?

Directly, not often. Indirectly, it greatly improves logical reasoning and coding skills.

---



---

# 🎉 Phase 2 Complete!

You have now covered:

- ✅ Chapter 1: Arrays
- ✅ Chapter 2: 2D & Multi-dimensional Arrays
- ✅ Chapter 3: Character Arrays & C Strings
- ✅ Chapter 4: `std::string`
- ✅ Chapter 5: Array Algorithms
- ✅ Chapter 6: String Algorithms
- ✅ Chapter 7: Pattern Printing

🚀 You're now ready to move on to **Phase 3: Searching & Sorting**, where you'll study Binary Search in depth, Sorting Algorithms (Bubble, Selection, Insertion, Merge, Quick, Heap, Counting, Radix), searching techniques, and their interview applications.
