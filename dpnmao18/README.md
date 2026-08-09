# DPNMAO18
## Difficulty: Easy

Array RotationGiven an integer array AAA, rotate the array to the right by KKK steps, where KKK is non negative.

Input Format

The first line contains two space separated integers, NNN, the size of the array, and KKK, the number of rotations.
The second line contains NNN space separated integers representing the elements of the array AAA.


Output Format

Print the elements of the rotated array, separated by spaces, on a single line.


Sample 1:
InputOutput7 3
1 2 3 4 5 6 75 6 7 1 2 3 4
Explanation:


Rotate 111 step to the right: [7,1,2,3,4,5,6][7, 1, 2, 3, 4, 5, 6][7,1,2,3,4,5,6]
Rotate 222 steps to the right: [6,7,1,2,3,4,5][6, 7, 1, 2, 3, 4, 5][6,7,1,2,3,4,5]
Rotate 333 steps to the right: [5,6,7,1,2,3,4][5, 6, 7, 1, 2, 3, 4][5,6,7,1,2,3,4]


Sample 2:
InputOutput4 2
-1 -100 3 993 99 -1 -100