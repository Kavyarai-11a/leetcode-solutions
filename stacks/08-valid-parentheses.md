# Valid Parentheses

**Problem:** Valid Parentheses (Easy)

**Link:** Valid Parentheses — LeetCode

### Approach

Use a stack to store opening brackets. For every closing bracket, check whether it matches the most recent opening bracket. At the end, the stack must be empty.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

Tested locally with two test cases: one typical case and one edge case. The solution was then submitted on LeetCode.
