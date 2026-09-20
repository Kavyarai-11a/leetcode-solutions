## Problem: Longest Common Prefix (Easy)

**Link:** Longest Common Prefix — LeetCode

### Approach

Start with the first string as the reference prefix. Compare it with each remaining string character by character and reduce the prefix length whenever the characters do not match.

### Complexity

* Time: O(n × m)
* Space: O(1)

### Notes

Tested locally with two test cases: one typical case and one edge case. The solution was then submitted on LeetCode.
