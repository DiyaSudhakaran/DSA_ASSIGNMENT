# Comparison Table – Linear Search vs Binary Search

| Search target | Linear search comparisons | Binary search comparisons | Observation |
|---|---:|---:|---|
| Frontend | 4 | 1 | Binary uses fewer comparisons |
| HR | 5 | 3 | Binary uses fewer comparisons |
| Testing | 7 | 3 | Binary uses fewer comparisons |
| **Total** | **16** | **7** | Binary uses fewer comparisons for these three searches overall |
| **Average** | **5.33** | **2.33** | Binary has lower average comparisons for this test set |

## General comparison

| Feature | Linear Search | Binary Search |
|---|---|---|
| Data requirement | No sorting required | Data must be sorted |
| Best case | O(1) | O(1) |
| Average case | O(n) | O(log n) |
| Worst case | O(n) | O(log n) |
| Extra search space | O(1) iterative | O(1) iterative |
| Main advantage | Simple and works on unsorted data | Efficient for large sorted lists |
