# Organisational Hierarchy – Data Structures Assignment

## Question

A company has the following organisational hierarchy:

- CEO -> HR, Finance, IT
- IT -> Development, Testing
- Development -> Frontend, Backend

The assignment requires:

1. Represent the hierarchy using a suitable tree and display it using level-order traversal.
2. Store department names in a searchable representation and compare Linear Search and Binary Search using at least three searches.
3. Analyse tree height, traversal behaviour, search comparisons, and time/space complexity, then justify the suitable approach.

## Repository contents

```text
Organisational_Hierarchy_GitHub/
├── README.md
├── Part_A/
│   └── tree_level_order.c
├── Part_B/
│   └── search_comparison.c
├── Part_C/
│   └── analysis_summary.md
├── Input_Data/
│   └── input_data.txt
├── Output/
│   ├── part_a_output.txt
│   └── part_b_output.txt
└── Documentation/
    ├── trace_table_part_a.md
    ├── trace_table_part_b.md
    ├── comparison_table.md
    ├── complexity_analysis.md
    └── final_conclusion.md
```

## How to compile and run

### Part A

```bash
gcc Part_A/tree_level_order.c -o part_a
./part_a
```

### Part B

```bash
gcc Part_B/search_comparison.c -o part_b
./part_b
```

## Expected key results

### Part A

Level-order traversal:

`CEO -> HR -> Finance -> IT -> Development -> Testing -> Frontend -> Backend`

Tree height:

`3 edges (4 levels)`

### Part B

| Target | Linear comparisons | Binary comparisons |
|---|---:|---:|
| Frontend | 4 | 1 |
| HR | 5 | 3 |
| Testing | 7 | 3 |
| **Total** | **16** | **7** |

## Complexity summary

- Level-order traversal: O(n) time, O(n) auxiliary space in the worst case.
- Linear Search: O(n) average/worst-case time, O(1) iterative extra space.
- Binary Search: O(log n) average/worst-case time, O(1) iterative extra space; requires sorted data.

## Submission checklist

- [x] Source code
- [x] Input data
- [x] Program output
- [x] Trace tables
- [x] Complexity analysis
- [x] Comparison table
- [x] Final conclusion
- [ ] GitHub repository link (paste your own repository URL after uploading)
