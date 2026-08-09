# WGHTS
## Difficulty: Easy

Weights

Chef is playing with weights. He has an object weighing 
𝑊
W units. He also has three weights each of 
𝑋
,
𝑌
,
X,Y, and 
𝑍
Z units respectively. Help him determine whether he can measure the exact weight of the object with one or more of these weights.

If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of single line containing a four positive integers 
𝑊
,
𝑋
,
𝑌
,
W,X,Y, and 
𝑍
Z.
Output Format

For each test case, output on a new line YES if it is possible to measure the weight of object with one or more of these weights, otherwise print NO.

You may print each character of the string in either uppercase or lowercase (for example, the strings yes, YES, Yes, and yeS will all be treated as identical).

Constraints
1
≤
𝑇
≤
10
4
1≤T≤10
4
1
≤
𝑊
,
𝑋
,
𝑌
,
𝑍
≤
10
5
1≤W,X,Y,Z≤10
5
Sample 1:
Input
Output
4
5 2 1 6
7 9 7 2
20 8 10 12
20 10 11 12

NO
YES
YES
NO

Explanation:

Test Case 
1
1: It is not possible to measure 
5
5 units using any combination of given weights.

Test Case 
2
2: Chef can use the second weight of 
7
7 units to measure the object exactly.

Test Case 
3
3: Chef can use combination of first and third weights to measure 
8
+
12
=
20
8+12=20 units.

Test Case 
4
4: Chef cannot measure 
20
20 units of weight using any combination of given weights.