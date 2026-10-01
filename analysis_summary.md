# Part (c) – Analysis Summary

## 1. Tree height
The longest path is CEO -> IT -> Development -> Frontend (or Backend), which contains 3 edges. Hence height = **3**, with **4 levels**.

## 2. Traversal behaviour
Level-order traversal uses a queue and visits every node level by level. Time complexity is **O(n)**.

## 3. Search comparisons
For Frontend, HR and Testing, the comparison counts are:

- Linear: 4, 5, 7
- Binary: 1, 3, 3

Totals: Linear = 16, Binary = 7.

## 4. Time and space complexity
- Tree level-order: O(n) time, O(n) worst-case auxiliary queue space.
- Linear search: O(1) best, O(n) average/worst; O(1) iterative extra space.
- Binary search: O(1) best, O(log n) average/worst; O(1) iterative extra space.

## 5. Suitability
The tree is suitable for organisational reporting because it preserves reporting relationships. A sorted array with binary search is suitable for repeated department searching when the sorted order can be maintained.
