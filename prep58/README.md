# PREP58
## Difficulty: Easy

Cycle in a linked list

You are given a linked list 
𝐴
A of size 
𝑁
N.

Return the node where the cycle begins in the linked list. If there is no cycle, return NULL.

Input:
First line will contain 
𝑇
T, number of test cases. Then the test cases follow.
Each test case contains three lines of input.
First line contains an integer 
𝑁
N, length of the linked list 
𝐴
A.
Second line contains 
𝐴
1
,
𝐴
2
,
…
𝐴
𝑁
A
1
	​

,A
2
	​

,…A
N
	​

, the value of the linked list nodes starting from the head for the linked list.
Third line contains an integer denoting the index of the node where the cycle starts.

Note:

For Java language, you need to:

Complete the function in the submit solution tab:

Node detectCycle(Node head){...}


 
 

For C++ language, you need to:

Complete the function in the submit solution tab:

Node* detectCycle(Node* head){...}


 
 

For Python language, you need to:

Complete the function in the submit solution tab:

def detectCycle(head):

Output:

The function you complete should return the required answer.

Constraints
1
≤
𝑇
≤
10
1≤T≤10
1
≤
𝑁
≤
10
5
1≤N≤10
5
1
≤
𝐴
𝑖
≤
10
9
1≤A
i
	​

≤10
9
Sample 1:
Input
Output
3
2
8 5
1
2
5 9
1
3
5 6 8
2
8
5
6
Explanation:

Test case 
1
1: The list is of the form 
8
⇌
5
8⇌5, where 
8
8 is the head. Thus, the cycle starts from 
8
8.

Test case 
2
2: The list is of the form 
5
⇌
9
5⇌9, where 
5
5 is the head. Thus, the cycle starts from 
5
5.

Test case 
3
3: The list is of the form 
5
→
6
⇌
8
5→6⇌8, where 
5
5 is the head. Thus, the cycle starts from 
6
6.