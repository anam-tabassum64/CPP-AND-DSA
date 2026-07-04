# Phase 2 - Complexity

## Arrays

| Operation | Time Complexity | Space Complexity | Notes |
| --- | --- | --- | --- |
| Access | O(1) | O(1) | Direct by index |
| Search | O(n) | O(1) | Linear scan in unsorted data |
| Insert | O(n) | O(1) | Shifting may be needed |
| Delete | O(n) | O(1) | Shifting may be needed |
| Traverse | O(n) | O(1) | One pass through all elements |

## Strings

| Operation | Time Complexity | Space Complexity | Notes |
| --- | --- | --- | --- |
| Concatenation | O(n + m) | O(n + m) | Depends on resulting length |
| Comparison | O(min(n, m)) | O(1) | Stops at first mismatch |
| Find | O(n * m) worst case | O(1) | Naive substring search |
| Substring | O(k) | O(k) | `k` is substring length |
| Insert | O(n) | O(1) to O(n) | May reallocate and shift |
| Erase | O(n) | O(1) | Shift remaining characters |

## Algorithms

| Algorithm | Time Complexity | Space Complexity | Notes |
| --- | --- | --- | --- |
| Linear Search | O(n) | O(1) | Check one element at a time |
| Binary Search | O(log n) | O(1) | Requires sorted data |
| Reverse | O(n) | O(1) | Swap from both ends |
| Rotate | O(n) | O(1) or O(n) | Depends on implementation |
| Prefix Sum | O(n) build, O(1) query | O(n) | Helpful for range sums |

## Why These Complexities Matter

- They help you pick the right approach quickly
- They are often asked in interviews
- They help you estimate whether a solution will scale

