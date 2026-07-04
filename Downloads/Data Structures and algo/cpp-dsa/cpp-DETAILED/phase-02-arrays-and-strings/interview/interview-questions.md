# Phase 2 - Interview Questions

## Theory Questions

- Explain the memory layout of an array.
- Why are arrays considered contiguous data structures?
- What is the difference between static and dynamic arrays?
- How does array decay work in function parameters?
- Why are 2D arrays stored in row-major order in C++?
- What is the difference between a character array and `std::string`?
- Why is `std::string` safer than C-style strings?
- What is the purpose of the null character?

## Scenario Questions

- You need to count the frequency of numbers in an array. Which approach would you use?
- You need to check whether a string is a palindrome. What is your approach?
- You need to print a pattern with nested rows and columns. How do you decide the loop structure?
- You need to process text with spaces. Why might `getline` be better than `cin >>`?
- You need to rotate an array by `k` positions. What edge cases do you consider?

## Output Prediction

- Predict the output of a loop with `continue` inside array traversal.
- Predict what happens if a character array is not null-terminated.
- Predict the output of string concatenation with mixed `std::string` and C strings.
- Predict the result of `substr()` when the starting index is near the end.
- Predict what happens when you access `arr[n]`.

## Edge Cases

- Empty array
- Single-element array
- Duplicate values
- All identical characters
- Empty string
- String with spaces
- Uppercase and lowercase mismatches
- Very large input size

## Memory Questions

- Where is a local array stored?
- Where is a dynamically allocated array stored?
- What happens when a function returns a pointer to local storage?
- What is the memory impact of copying a large string?
- Why is cache locality relevant for arrays?

## Good Answer Pattern

When answering, keep the structure:

1. Define the concept
2. State the memory or algorithm idea
3. Mention complexity
4. Add one edge case
5. Give a short example if needed

