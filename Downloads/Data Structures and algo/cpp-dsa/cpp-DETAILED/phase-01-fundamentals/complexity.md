# Phase 1 - Complexity

## Time Complexity

Time complexity describes how the runtime of an algorithm grows as input size increases.

### Common Cases

| Case | Meaning |
| --- | --- |
| Best Case | Fastest possible runtime |
| Average Case | Expected runtime for typical inputs |
| Worst Case | Slowest possible runtime |

### Typical Phase 1 Examples

| Operation | Time Complexity |
| --- | --- |
| Access array element by index | O(1) |
| Traverse an array | O(n) |
| Search in unsorted array | O(n) |
| Search in sorted array using binary search | O(log n) |
| Nested loops over matrix | O(n * m) |

## Space Complexity

Space complexity measures how much extra memory an algorithm uses.

### Typical Phase 1 Examples

| Operation | Space Complexity |
| --- | --- |
| Single variable | O(1) |
| Fixed set of variables | O(1) |
| Array of size n | O(n) |
| Recursive call stack | O(depth of recursion) |

## Why Complexity Matters

- Helps compare solutions before coding
- Helps explain performance in interviews
- Helps select the right data structure or loop structure

## Phase 1 Complexity by Topic

| Topic | Complexity Notes |
| --- | --- |
| Variables and constants | Usually O(1) space for each variable |
| Input and output | Often O(n) for n inputs |
| Operators and expressions | Usually O(1) per operation |
| Conditions | Usually O(1) per branch check |
| Loops | Usually O(n) for one pass, O(n^2) or more for nesting |
| Functions | Depends on operations inside the function |
| Debugging and assertions | No fixed algorithmic complexity, but useful for validation |

## Best Practices

- Always mention complexity while presenting a solution
- Compare alternatives before choosing one
- Separate time and space analysis clearly

