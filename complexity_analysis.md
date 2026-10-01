# Complexity Analysis

## Part (a) – Tree construction and level-order traversal

The organisational hierarchy has 8 nodes and a maximum depth of 3 edges.
Therefore, the tree has **height 3** when height is measured as the number of edges on the longest root-to-leaf path. It has **4 levels** when the root is counted as level 0.

### Tree height

- Root: CEO
- Level 1: HR, Finance, IT
- Level 2: Development, Testing
- Level 3: Frontend, Backend
- Height = **3 edges**

### Traversal behaviour

Level-order traversal visits nodes level by level from left to right. A queue is used to store nodes waiting to be processed.

### Time complexity

- Tree construction for this fixed hierarchy: **O(n)** overall for the nodes/links created.
- Level-order traversal: **O(n)** because each node is visited once.
- Auxiliary queue space: **O(w)**, where `w` is the maximum width of the tree; in general O(n).
- Tree storage: **O(n)**.

## Part (b) – Searching

There are 7 department names in the searchable representation.

### Linear Search

- Does not require sorted data.
- Best case: **O(1)**
- Average case: **O(n)**
- Worst case: **O(n)**
- Iterative extra space: **O(1)**

### Binary Search

- Requires the department names to be sorted.
- Best case: **O(1)**
- Average case: **O(log n)**
- Worst case: **O(log n)**
- Iterative extra space: **O(1)**

## Part (c) – Overall analysis

For organisational reporting, the tree representation is suitable because it directly represents the parent-child reporting relationships and supports level-order display.

For repeated department searching, a sorted array with binary search reduces the number of comparisons as the number of departments grows. However, if the data is frequently changed and sorting is not maintained, linear search is simpler.
