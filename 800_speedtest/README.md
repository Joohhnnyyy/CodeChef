# SPEEDTEST
## Difficulty: Easy

Speed Limit TestAlice is driving from her home to her office which is AAA kilometers away and will take her XXX hours to reach.
Bob is driving from his home to his office which is BBB kilometers away and will take him YYY hours to reach.
Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.

Input Format

The first line will contain TTT, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing four integers A,X,B,A,X,B,A,X,B, and YYY, the distances and and the times taken by Alice and Bob respectively.


Output Format
For each test case, if Alice is faster, print ALICE. Else if Bob is faster, print BOB. If both are equal, print EQUAL.
You may print each character of the string in uppercase or lowercase (for example, the strings equal, equAL, EquAl, and EQUAL will all be treated as identical).

Constraints


1≤T≤10001 \leq T \leq 10001≤T≤1000
1≤A,X,B,Y≤10001 \leq A,X,B,Y \leq 10001≤A,X,B,Y≤1000


Sample 1:
InputOutput3
20 6 20 5
10 3 20 6
9 1 1 1
Bob
Equal
Alice

Explanation:

Test case 111: Since Bob travels the distance between his office and house in 555 hours, whereas Alice travels the same distance of 202020 kms in 666 hours, BOB is faster.
Test case 222: Since Alice travels the distance of 101010 km between her office and house in 333 hours and Bob travels a distance of 202020 km in 666 hours, they have equal speeds.
Test case 333: Since Alice travels the distance of 999 km between her office and house in 111 hour and Bob travels only a distance of 111 km in the same time, ALICE is faster.