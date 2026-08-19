# Function Declaration
## Difficulty: Easy

Zero Sum Triplets

Chef is arranging dishes on a table.
You are given an array of dishes with 
𝑁
N dishes. Each dish has a number (positive, negative, or zero).

Chef wants to know:
Can we pick any 3 different dishes indices such that their total is exactly 0?

Your task is to find all such unique triplets.

A valid triplet contains 3 different numbers (on different indices) from the array.
The same triplet should not repeat.
Print each triplet in non-decreasing order.
If no triplet exists return empty array that will be treated as print -1.
Function Declaration
Function Name

𝑓
𝑖
𝑛
𝑑
𝑍
𝑒
𝑟
𝑜
𝑆
𝑢
𝑚
𝑇
𝑟
𝑖
𝑝
𝑙
𝑒
𝑡
𝑠
findZeroSumTriplets – This function finds all unique triplets in the array whose sum is exactly zero.

Parameters
𝑛
𝑢
𝑚
𝑠
nums : A reference to an integer array containing 
𝑁
N elements, where each element can be positive, negative, or zero.
Return Value
Returns a 2D array containing all unique triplets whose sum is 0.
Each triplet is sorted in non-decreasing order.
If no such triplet exists, return an empty array (this will be treated as printing -1).
Constraints
3
≤
𝑁
≤
3000
3≤N≤3000
−
100000
≤
𝑛
𝑢
𝑚
𝑠
[
𝑖
]
≤
100000
−100000≤nums[i]≤100000
Input Format
The first line contains a single integer 
𝑁
N — the number of elements in the array.
The second line contains 
𝑁
N space-separated integers representing the array elements.
Output Format
Print all valid triplets, one triplet per line.
Each triplet should contain three space-separated integers.
If no triplet exists, print -1.
Sample 1:
Input
Output
5
2 -2 0 1 -1

-2 0 2
-1 0 1
Explanation:

Triplet (-2, 0, 2) -> sum = 0
Triplet (-1, 0, 1) -> sum = 0
These are the only unique triplets.

Sample 2:
Input
Output
4
5 -3 -2 1

-3 -2 5

Explanation:

Triplet (-3, -2, 5) -> sum = 0
No other triplet exists.

Sample 3:
Input
Output
4
1 2 3 4

-1

Explanation:

No three numbers add up to 0, so output is -1.