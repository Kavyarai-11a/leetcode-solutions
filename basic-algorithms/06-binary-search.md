## Problem: Binary Search (Easy)

**Link:** Binary Search — LeetCode

### Approach

Use two pointers, `left` and `right`, to define the search range. Check the middle element and eliminate half of the remaining search space after each comparison.

### Complexity

* Time: O(log n)
* Space: O(1)

### Notes

The input array must be sorted for binary search to work correctly. Tested locally with two test cases before submission.
