# Final Conclusion

The organisational hierarchy was represented using a general tree with first-child/next-sibling links. This representation can store departments with different numbers of sub-departments without fixing the number of children in advance.

Level-order traversal correctly displayed the hierarchy as:

`CEO -> HR -> Finance -> IT -> Development -> Testing -> Frontend -> Backend`

The tree has a height of **3 edges (4 levels)**. Level-order traversal takes **O(n)** time because every node is visited once.

For department searching, the seven department names were stored in sorted order so that both Linear Search and Binary Search could be compared. For the three test searches, the recorded comparison totals were **16 for Linear Search** and **7 for Binary Search**. Binary Search therefore used fewer comparisons for this particular test set.

In general, Linear Search has O(n) average/worst-case time, while Binary Search has O(log n) average/worst-case time when the data is sorted. Therefore, the tree is suitable for organisational reporting, while a sorted searchable representation with Binary Search is appropriate when department searching is frequent and the list is maintained in sorted order.
