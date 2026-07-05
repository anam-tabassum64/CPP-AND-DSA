# 📊 Phase 2 - Complexity Analysis

> Understanding Time and Space Complexity is essential for writing efficient programs. This document summarizes the complexity of all operations and algorithms covered in **Phase 2**.

---

# 📖 What is Time Complexity?

Time Complexity measures **how the execution time of an algorithm grows as the input size (`n`) increases**.

It does **not** represent the actual execution time in seconds. Instead, it describes the growth rate of an algorithm.

Example:

```cpp
for(int i=0;i<n;i++)
    cout<<arr[i];
```

The loop executes `n` times.

**Time Complexity = O(n)**

---

# 📖 What is Space Complexity?

Space Complexity measures the **extra memory required** by an algorithm apart from the input.

Example

```cpp
int sum=0;
```

Only one variable is used.

**Space Complexity = O(1)**

---

# 📚 Asymptotic Notations

| Notation | Meaning | Description |
|-----------|----------|-------------|
| **O()** | Big O | Worst Case |
| **Ω()** | Omega | Best Case |
| **Θ()** | Theta | Average/Exact Case |

Example

Binary Search

Best Case

```text
Ω(1)
```

Worst Case

```text
O(log n)
```

---

# ⚡ Common Complexity Order

| Complexity | Performance | Example |
|------------|-------------|---------|
| O(1) | ⭐⭐⭐⭐⭐ Excellent | Array Access |
| O(log n) | ⭐⭐⭐⭐⭐ Excellent | Binary Search |
| O(n) | ⭐⭐⭐⭐ Good | Linear Search |
| O(n log n) | ⭐⭐⭐ Good | Merge Sort |
| O(n²) | ⭐⭐ Slow | Bubble Sort |
| O(2ⁿ) | ⭐ Very Slow | Recursive Backtracking |
| O(n!) | ❌ Extremely Slow | Permutations |

---

# 📦 Arrays

## Complexity Table

| Operation | Best | Average | Worst | Space | Explanation |
|-----------|------|----------|--------|--------|-------------|
| Access | O(1) | O(1) | O(1) | O(1) | Direct indexing |
| Update | O(1) | O(1) | O(1) | O(1) | Replace value |
| Traverse | O(n) | O(n) | O(n) | O(1) | Visit every element |
| Linear Search | O(1) | O(n) | O(n) | O(1) | Sequential search |
| Insert (Beginning) | O(n) | O(n) | O(n) | O(1) | Shift all elements |
| Insert (Middle) | O(n) | O(n) | O(n) | O(1) | Shift remaining elements |
| Insert (End) | O(1)* | O(1)* | O(1)* | O(1) | If space is available |
| Delete (Beginning) | O(n) | O(n) | O(n) | O(1) | Shift left |
| Delete (Middle) | O(n) | O(n) | O(n) | O(1) | Shift remaining elements |
| Delete (End) | O(1) | O(1) | O(1) | O(1) | Just reduce size |
| Copy | O(n) | O(n) | O(n) | O(n) | Duplicate every element |

> **Note:** `*` Insert at the end is O(1) only when the array has available capacity.

---

# 📐 2D Arrays

| Operation | Time | Space | Explanation |
|-----------|------|--------|-------------|
| Access | O(1) | O(1) | Direct indexing |
| Traverse | O(rows × cols) | O(1) | Visit each cell |
| Matrix Addition | O(rows × cols) | O(rows × cols) | New matrix |
| Matrix Transpose | O(rows × cols) | O(rows × cols)* | Extra matrix (or O(1) in-place for square matrices) |
| Matrix Multiplication | O(n³) | O(n²) | Basic algorithm |

---

# 🔤 Character Arrays (C Strings)

| Operation | Time | Space | Explanation |
|-----------|------|--------|-------------|
| Access Character | O(1) | O(1) | Direct indexing |
| Traversal | O(n) | O(1) | Visit every character |
| strlen() | O(n) | O(1) | Counts until '\0' |
| strcpy() | O(n) | O(1) | Copies every character |
| strcat() | O(n+m) | O(1) | Append strings |
| strcmp() | O(min(n,m)) | O(1) | Stops at first mismatch |

---

# 📝 std::string Operations

| Function | Time | Space | Notes |
|----------|------|--------|------|
| size() / length() | O(1) | O(1) | Stored internally |
| empty() | O(1) | O(1) | Simple check |
| operator[] | O(1) | O(1) | Direct access |
| at() | O(1) | O(1) | Includes bounds checking |
| push_back() | O(1)* | O(1) | Amortized |
| pop_back() | O(1) | O(1) | Remove last character |
| append() | O(n+m) | O(n+m) | May reallocate |
| insert() | O(n) | O(n) | Shift characters |
| erase() | O(n) | O(1) | Shift remaining characters |
| replace() | O(n) | O(n) | Depends on replacement |
| find() | O(n×m) | O(1) | Naive implementation |
| substr() | O(k) | O(k) | Creates new string |
| compare() | O(min(n,m)) | O(1) | Lexicographical comparison |

> **Amortized O(1):** Occasional reallocations make some insertions slower, but the average cost remains constant.

---

# 🔍 Searching Algorithms

| Algorithm | Best | Average | Worst | Space | Requirement |
|-----------|------|----------|--------|--------|-------------|
| Linear Search | O(1) | O(n) | O(n) | O(1) | Works on any array |
| Binary Search | O(1) | O(log n) | O(log n) | O(1) | Sorted array required |

---

# 🔄 Array Algorithms

| Algorithm | Time | Space | Notes |
|-----------|------|--------|------|
| Reverse | O(n) | O(1) | Two Pointer Technique |
| Rotate Array | O(n) | O(1) | Reversal Algorithm |
| Frequency Count | O(n) | O(n) | Hash Map |
| Prefix Sum Build | O(n) | O(n) | One-time preprocessing |
| Prefix Sum Query | O(1) | O(1) | Instant range sum |

---

# 🔠 String Algorithms

| Algorithm | Time | Space |
|-----------|------|--------|
| Reverse String | O(n) | O(1) |
| Palindrome Check | O(n) | O(1) |
| Character Frequency | O(n) | O(n) |
| Anagram (Sorting) | O(n log n) | O(1) |
| Anagram (Frequency Array) | O(n) | O(1) |
| Tokenization | O(n) | O(n) |
| Pattern Matching (Naive) | O(n×m) | O(1) |
| KMP (Intro) | O(n+m) | O(m) |
| Rabin-Karp (Average) | O(n+m) | O(1) |

---

# ⭐ Pattern Printing

| Operation | Time | Space |
|-----------|------|--------|
| Basic Patterns | O(n²) | O(1) |
| Pyramid Patterns | O(n²) | O(1) |
| Diamond Patterns | O(n²) | O(1) |
| Hollow Patterns | O(n²) | O(1) |

---

# 🧠 Interview Tips

### When should you use an Array?

- Fast random access is required.
- Size is known in advance.
- Cache performance matters.

### When should you use Binary Search?

- Data is sorted.
- Multiple search operations are required.

### Why is insertion slow in arrays?

Because elements must be shifted to maintain contiguous memory.

### Why is `std::string` preferred over `char[]`?

- Dynamic size
- Automatic memory management
- Rich built-in functions
- Safer operations

---

# 🚀 Complexity Cheat Sheet

| Complexity | Meaning |
|------------|---------|
| O(1) | Constant Time |
| O(log n) | Logarithmic |
| O(n) | Linear |
| O(n log n) | Linearithmic |
| O(n²) | Quadratic |
| O(2ⁿ) | Exponential |
| O(n!) | Factorial |

---

# 📌 Key Takeaways

- ✅ Arrays provide **O(1)** random access.
- ✅ Binary Search is much faster than Linear Search but requires sorted data.
- ✅ Prefix Sum reduces range query time from **O(n)** to **O(1)** after preprocessing.
- ✅ Most string operations are **O(n)** because characters may need to be traversed or shifted.
- ✅ Understanding complexity helps you choose the right algorithm and write scalable, interview-ready code.
