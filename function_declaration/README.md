# Function Declaration
## Difficulty: Easy

Find minimum in a rotated sorted array

Imagine you have an array of length 
𝑛
n that was initially sorted in increasing order, but then it was rotated some number of times between 
1
1 and 
𝑛
n. A rotation consists of moving the last element of the array to the first position.

For example, if the sorted array is 
𝑛
𝑢
𝑚
𝑏
𝑒
𝑟
𝑠
=
[
1
,
2
,
3
,
4
,
5
,
6
,
7
]
numbers=[1,2,3,4,5,6,7], after rotating it 3 times, it becomes: 
[
5
,
6
,
7
,
1
,
2
,
3
,
4
]
[5,6,7,1,2,3,4]

Or after rotating 7 times, the array stays the same: 
[
1
,
2
,
3
,
4
,
5
,
6
,
7
]
[1,2,3,4,5,6,7]

Your task is: Given a rotated sorted array of distinct integers, write an efficient algorithm to find and return the smallest element in the array.

Your solution must run in O(log n) time complexity.

Function Declaration
Function Name

𝑓
𝑖
𝑛
𝑑
𝑀
𝑖
𝑛
findMin – This function returns the minimum element in a rotated sorted array of distinct integers.

Parameters
𝑛
𝑢
𝑚
𝑠
nums : A reference to a rotated sorted array of distinct integers.
Return Value
Returns the smallest integer present in the array.
Input Format
The first line contains an integer 
𝑇
T — number of test cases.
For each test case:
One line containing an integer 
𝑛
n — size of the array
One line containing 
𝑛
n space-separated integers — the rotated sorted array
Output Format
For each test case, print a single integer — the minimum element in the array
Constraints
1 <= T <= 100
1
≤
𝑛
𝑢
𝑚
𝑠
.
𝑙
𝑒
𝑛
𝑔
𝑡
ℎ
≤
10
5
1≤nums.length≤10
5
−
10
4
≤
𝑛
𝑢
𝑚
𝑠
[
𝑖
]
≤
10
4
−10
4
≤nums[i]≤10
4
All elements in 
𝑛
𝑢
𝑚
𝑠
nums are unique
𝑛
𝑢
𝑚
𝑠
nums is guaranteed to be a rotated version of a sorted array
Sample 1:
Input
Output
3
8
7 8 1 2 3 4 5 6
6
12 15 18 2 5 8
6
3 4 5 6 1 2

1
2
1