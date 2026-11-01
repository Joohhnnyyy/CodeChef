# Function Declaration
## Difficulty: Easy

Remove Duplicates from Sorted Array

Chef has an integer array 
𝑛
𝑢
𝑚
𝑠
nums sorted in non-decreasing order.
Chef wants to remove all duplicate elements from the array in-place such that each unique element appears only once.

The relative order of the elements should remain the same.

After removing the duplicates, let the number of unique elements be 
𝐾
K.
The first 
𝐾
K elements of the array should contain the unique elements in their original order.
The values beyond the first 
𝐾
K elements do not matter.
Your task is to help Chef find 
𝐾
K and print the first 
𝐾
K elements of the modified array.

Function Declaration
Function Name

𝑟
𝑒
𝑚
𝑜
𝑣
𝑒
𝐷
𝑢
𝑝
𝑙
𝑖
𝑐
𝑎
𝑡
𝑒
𝑠
removeDuplicates – Removes duplicate elements from a sorted array in-place.

Parameters
𝑛
𝑢
𝑚
𝑠
nums : A list/array of integers sorted in non-decreasing order.
Return Value
Returns an integer K — the number of unique elements.
The first 
𝐾
K positions of 
𝑛
𝑢
𝑚
𝑠
nums must contain these unique values.
Constraints:
1
≤
𝑁
≤
3
×
10
4
1≤N≤3×10
4
–
100
≤
𝑛
𝑢
𝑚
𝑠
[
𝑖
]
≤
100
–100≤nums[i]≤100
𝑛
𝑢
𝑚
𝑠
nums is sorted in non-decreasing order.
Input Format
𝑁
N → size of array
Next line → N sorted integers
Output Format
Print 
𝐾
K
Print the first K unique elements of the modified array
Sample 1:
Input
Output
6
1 1 2 2 3 3

3
1 2 3

Explanation:

nums = [1,1,2,2,3,3] -> After removing duplicates: [1, 2, 3, _, _, _].
Here, K = 3, and the first three elements are 1 2 3.

Sample 2:
Input
Output
5
0 0 1 1 1

2
0 1

Explanation:

nums = [0,0,1,1,1] -> After removing duplicates: [0, 1, _, _, _].
Here, K = 2, and the first two elements are 0 1.