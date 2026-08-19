# SPEEDTEST
## Difficulty: Easy

Speed Limit Test

Alice is driving from her home to her office which is 
𝐴
A kilometers away and will take her 
𝑋
X hours to reach.
Bob is driving from his home to his office which is 
𝐵
B kilometers away and will take him 
𝑌
Y hours to reach.

Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.

Input Format
The first line will contain 
𝑇
T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing four integers 
𝐴
,
𝑋
,
𝐵
,
A,X,B, and 
𝑌
Y, the distances and and the times taken by Alice and Bob respectively.
Output Format

For each test case, if Alice is faster, print ALICE. Else if Bob is faster, print BOB. If both are equal, print EQUAL.

You may print each character of the string in uppercase or lowercase (for example, the strings equal, equAL, EquAl, and EQUAL will all be treated as identical).

Constraints
1
≤
𝑇
≤
1000
1≤T≤1000
1
≤
𝐴
,
𝑋
,
𝐵
,
𝑌
≤
1000
1≤A,X,B,Y≤1000
Sample 1:
Input
Output
3
20 6 20 5
10 3 20 6
9 1 1 1

Bob
Equal
Alice

Explanation:

Test case 
1
1: Since Bob travels the distance between his office and house in 
5
5 hours, whereas Alice travels the same distance of 
20
20 kms in 
6
6 hours, BOB is faster.

Test case 
2
2: Since Alice travels the distance of 
10
10 km between her office and house in 
3
3 hours and Bob travels a distance of 
20
20 km in 
6
6 hours, they have equal speeds.

Test case 
3
3: Since Alice travels the distance of 
9
9 km between her office and house in 
1
1 hour and Bob travels only a distance of 
1
1 km in the same time, ALICE is faster.