# DPNMAO18
## Difficulty: Easy

Array Rotation

Given an integer array 
𝐴
A, rotate the array to the right by 
𝐾
K steps, where 
𝐾
K is non negative.

Input Format
The first line contains two space separated integers, 
𝑁
N, the size of the array, and 
𝐾
K, the number of rotations.
The second line contains 
𝑁
N space separated integers representing the elements of the array 
𝐴
A.
Output Format
Print the elements of the rotated array, separated by spaces, on a single line.
Sample 1:
Input
Output
7 3
1 2 3 4 5 6 7
5 6 7 1 2 3 4
Explanation:
Rotate 
1
1 step to the right: 
[
7
,
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
]
[7,1,2,3,4,5,6]
Rotate 
2
2 steps to the right: 
[
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
,
5
]
[6,7,1,2,3,4,5]
Rotate 
3
3 steps to the right: 
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
Sample 2:
Input
Output
4 2
-1 -100 3 99
3 99 -1 -100