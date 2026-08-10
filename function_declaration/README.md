# Function Declaration
## Difficulty: Easy

Find the Length of the Linked List

You are given a singly linked list.
Your task is to find the number of nodes present in the linked list.

The linked list nodes are provided in the form of integer values.

Function Declaration
Function Name

𝑔
𝑒
𝑡
𝐿
𝑒
𝑛
𝑔
𝑡
ℎ
getLength — This function calculates and returns the total number of nodes in a given singly linked list.

Parameters

ℎ
𝑒
𝑎
𝑑
head: A pointer to the first node of the singly linked list.

If 
ℎ
𝑒
𝑎
𝑑
head is 
𝑁
𝑈
𝐿
𝐿
NULL, the list is empty.
Each node contains an integer value and a pointer to the next node.
Return Value

Returns an integer representing the number of nodes present in the linked list starting from 
ℎ
𝑒
𝑎
𝑑
head.

Returns 
0
0 if the list is empty.

The input and output formats provided below are only for testing with custom inputs.

Constraints:
1
≤
𝑇
≤
100
1≤T≤100
0
≤
𝑁
≤
10
5
0≤N≤10
5
Sum of all 
𝑁
 across test cases
≤
10
6
Sum of all N across test cases≤10
6
Linked list element constraints:
Linked list element constraints:
Each element is an integer
Each element is an integer
−
10
9
≤
value
≤
10
9
−10
9
≤value≤10
9
Input Format

The first line contains an integer 
𝑇
T, the number of test cases.

For each test case:

The first line contains an integer 
𝑁
N, the number of nodes in the linked list.
The second line contains 
𝑁
N space-separated integers representing the linked list elements.
Output Format

For each test case, print a single line containing the length of the linked list.

Sample 1:
Input
Output
3
5
1 2 3 4 5
2
8 6
1
9

5
2
1

Explanation:

Test 1: Linked list = [1, 2, 3, 4, 5] -> 5 nodes

Test 2: Linked list = [8, 6] -> 2 nodes

Test 3: Linked list = [9] -> 1 node