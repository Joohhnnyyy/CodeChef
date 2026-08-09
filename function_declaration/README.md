# Function Declaration
## Difficulty: Easy

Find the insert position

You are given a sorted array of unique integers and a target number. Your task is to return the index of the target if it exists in the array. If the target is not present, return the index where it should be inserted so that the array remains sorted.

Your solution must run in O(log n) time complexity.

Function Declaration
Function Name

𝑠
𝑒
𝑎
𝑟
𝑐
ℎ
𝐼
𝑛
𝑠
𝑒
𝑟
𝑡
𝑃
𝑜
𝑠
𝑖
𝑡
𝑖
𝑜
𝑛
searchInsertPosition – This function returns the index of a target element in a sorted array. If the element is not present, it returns the position where it should be inserted to maintain sorted order.

Parameters
𝑎
𝑟
𝑟
arr : A reference to a sorted array of unique integers.
𝑡
𝑎
𝑟
𝑔
𝑒
𝑡
target : The integer value to be searched or inserted.
Return Value
Returns the index of 
𝑡
𝑎
𝑟
𝑔
𝑒
𝑡
target if it exists.
Returns the index where 
𝑡
𝑎
𝑟
𝑔
𝑒
𝑡
target should be inserted if it does not exist.
Constraints
1
≤
𝑇
≤
10
1≤T≤10
1
≤
𝑛
≤
10
4
1≤n≤10
4
−
10
4
≤
𝑎
𝑟
𝑟
[
𝑖
]
≤
10
4
−10
4
≤arr[i]≤10
4
Elements in 
𝑎
𝑟
𝑟
arr are unique and sorted in non-decreasing order
−
10
4
≤
𝑡
𝑎
𝑟
𝑔
𝑒
𝑡
≤
10
4
−10
4
≤target≤10
4
Input Format
The first line contains an integer 
𝑇
T — number of test cases.
For each test case:
One line containing two integers: 
𝑛
n and 
𝑡
𝑎
𝑟
𝑔
𝑒
𝑡
target
One line containing 
𝑛
n space-separated integers — the sorted array
Output Format
For each test case, print a single integer — the insert position.
Sample 1:
Input
Output
3
4 8
2 4 8 10
4 5
2 4 8 10
4 12
2 4 8 10

2
2
4