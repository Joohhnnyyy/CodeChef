# CHEFAPPS
## Difficulty: Easy

Chef and his Apps

Chef's phone has a total storage of 
𝑆
S MB. Also, Chef has 
2
2 apps already installed on his phone which occupy 
𝑋
X MB and 
𝑌
Y MB respectively.

He wants to install another app on his phone whose memory requirement is 
𝑍
Z MB. For this, he might have to delete the apps already installed on his phone. Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.

Input Format
The first line contains a single integer 
𝑇
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains four integers 
𝑆
,
𝑋
,
𝑌
S,X,Y and 
𝑍
Z — the total memory of Chef's phone, the memory occupied by the two already installed apps and the memory required by the third app.
Output Format

For each test case, output the minimum number of apps Chef has to delete from his phone so that he can install the third app.

Constraints
1
≤
𝑇
≤
1000
1≤T≤1000
1
≤
𝑆
≤
500
1≤S≤500
1
≤
𝑋
≤
𝑌
≤
𝑆
1≤X≤Y≤S
𝑋
+
𝑌
≤
𝑆
X+Y≤S
𝑍
≤
𝑆
Z≤S
Sample 1:
Input
Output
4
10 1 2 3
9 4 5 1
15 5 10 15
100 20 30 75

0
1
2
1

Explanation:

Test Case 1: The unused memory in the phone is 
7
7 MB. Therefore Chef can install the 
3
3 MB app without deleting any app.

Test Case 2: There is no unused memory in the phone. Chef has to first delete one of the apps from the phone and then only he can install the 
1
1 MB app.

Test Case 3: There is no unused memory in the phone. Chef has to first delete both the apps from the phone and then only he can install the 
15
15 MB app.

Test Case 4: The unused memory in the phone is 
50
50 MB. Chef has to first delete the 
30
30 MB app from the phone and then only he can install the 
75
75 MB app.