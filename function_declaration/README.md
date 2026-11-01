# Function Declaration
## Difficulty: Easy

Rotate the array

You are given an integer array 
𝑛
𝑢
𝑚
𝑠
nums. Rotate the array to the right by 
𝑘
k positions, where 
𝑘
k is a non-negative integer.
For example:
Given the array [10, 20, 30, 40, 50], rotating it two times to the right results in:
First rotation - [50, 10, 20, 30, 40]
Second rotation - [40, 50, 10, 20, 30]
You need to implement a solution that operates in-place and uses only 
𝑂
(
1
)
O(1) additional space.
You don’t need to print any values; simply edit the values of the array.

Function Declaration
Function Name

𝑟
𝑜
𝑡
𝑎
𝑡
𝑒
rotate – This function rotates an array to the right by 
𝑘
k positions in-place.

Parameters
𝑛
𝑢
𝑚
𝑠
nums : An array of integers.
𝑘
k : A non-negative integer representing the number of right rotations.
Return Value
This function does not return anything.
The array 
𝑛
𝑢
𝑚
𝑠
nums is modified in-place.
Constraints
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
2
31
≤
𝑛
𝑢
𝑚
𝑠
[
𝑖
]
≤
2
31
−
1
−2
31
≤nums[i]≤2
31
−1
0
≤
𝑘
≤
10
9
0≤k≤10
9
Rotation must be done using O(1) extra space
Follow up:
Can you think of multiple approaches to solve this problem? (There are at least three different strategies.)
Input Format
The first line contains two integers 
𝑁
N and 
𝐾
K — the size of the array and the number of right rotations.
The second line contains 
𝑁
N space-separated integers representing the array elements.
Output Format
Print the rotated array in a line (space-separated).
Sample 1:
Input
Output
5 2
10 20 30 40 50
40 50 10 20 30
Explanation:

rotate 1 step to the right: [50,10,20,30,40]
rotate 2 steps to the right: [40,50,10,20,30]

Sample 2:
Input
Output
5 3
7 8 9 1 2
9 1 2 7 8
Explanation:

rotate 1 step to the right: [2,7,8,9,1]
rotate 2 steps to the right: [1,2,7,8,9]
rotate 3 steps to the right: [9,1,2,7,8]