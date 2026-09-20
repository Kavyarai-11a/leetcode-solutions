## Problem: Move Zeroes (Easy)

**Link:** Move Zeroes — LeetCode

### Approach

Traverse the array and keep a position for the next non-zero element. Move every non-zero element forward while preserving their relative order, leaving all zeroes at the end.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

Tested locally with two test cases: one typical case and one edge case. The solution was then submitted on LeetCode.
