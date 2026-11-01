# SESO28
## Difficulty: Easy

Quick Sort

Quick sort is a fast sorting algorithm that uses a divide-and-conquer strategy. Here's a simple explanation:

Choose a Pivot: Select an element from the array as the pivot.

Partitioning: Rearrange the array so that all elements less than the pivot are on the left and all elements greater than the pivot are on the right. Place the pivot in its correct position.

Recursively Apply: Apply the same process to the sub-arrays of elements on the left and right of the pivot.

Base Case: When the sub-array has zero or one element, it is already sorted.

Key Points
Average Time Complexity: O(nlogn)
Worst-Case Time Complexity: O(n 2)
Space Complexity: O(logn)
In-Place Sorting: Requires minimal additional space
Not Stable: May not preserve the order of equal elements