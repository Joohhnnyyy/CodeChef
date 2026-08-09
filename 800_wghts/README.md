# WGHTS
## Difficulty: Easy

WeightsChef is playing with weights. He has an object weighing WWW units. He also has three weights each of X,Y,X, Y,X,Y, and ZZZ units respectively. Help him determine whether he can measure the exact weight of the object with one or more of these weights.
If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.

Input Format

The first line of input will contain a single integer TTT, denoting the number of test cases.
Each test case consists of single line containing a four positive integers W,X,Y,W, X, Y,W,X,Y, and ZZZ.


Output Format
For each test case, output on a new line YES if it is possible to measure the weight of object with one or more of these weights, otherwise print NO.
You may print each character of the string in either uppercase or lowercase (for example, the strings yes, YES, Yes, and yeS will all be treated as identical).

Constraints


1≤T≤1041 \leq T \leq 10^41≤T≤104
1≤W,X,Y,Z≤1051 \leq W, X, Y, Z \leq 10^51≤W,X,Y,Z≤105


Sample 1:
InputOutput4
5 2 1 6
7 9 7 2
20 8 10 12
20 10 11 12
NO
YES
YES
NO

Explanation:

Test Case 111: It is not possible to measure 555 units using any combination of given weights.
Test Case 222: Chef can use the second weight of 777 units to measure the object exactly.
Test Case 333: Chef can use combination of first and third weights to measure 8+12=208+12=208+12=20 units.
Test Case 444: Chef cannot measure 202020 units of weight using any combination of given weights.