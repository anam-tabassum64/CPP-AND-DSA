# Phase 2 - Cheat Sheet

## Array Syntax

```cpp
int arr[5] = {1, 2, 3, 4, 5};
cout << arr[0];
```

## String Syntax

```cpp
#include <string>
string s = "hello";
cout << s.size();
```

## Common Functions

### Arrays

- `arr[i]`
- loops for traversal
- size passed separately to functions

### C Strings

- `strlen`
- `strcpy`
- `strcat`
- `strcmp`

### `std::string`

- `size()`
- `length()`
- `empty()`
- `substr()`
- `find()`
- `append()`
- `insert()`
- `erase()`
- `push_back()`
- `pop_back()`

## Array Operations

- Traverse
- Update
- Search
- Reverse
- Rotate
- Copy
- Prefix sum

## String Functions

- Reverse string
- Check palindrome
- Check anagram
- Count characters
- Split words
- Match substring

## Useful STL Functions

- `sort`
- `reverse`
- `count`
- `find`
- `accumulate`
- `getline`
- `stringstream`

## Complexity Table

| Task | Typical Complexity |
| --- | --- |
| Access array element | O(1) |
| Traverse array | O(n) |
| Linear search | O(n) |
| Binary search | O(log n) |
| Reverse array/string | O(n) |
| Prefix sum build | O(n) |
| String compare | O(min(n, m)) |
| Substring search | O(n * m) worst case |

## Interview Tips

- Always mention time and space complexity
- Explain why arrays are contiguous
- Compare `char[]` and `std::string`
- Mention row-major order for 2D arrays
- Use examples to explain palindrome and anagram logic

