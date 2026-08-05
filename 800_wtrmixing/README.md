# WTRMIXING
## Difficulty: Easy

Water MixingChef is setting up a perfect bath for himself. He has XXX litres of hot water and YYY litres of cold water.
The initial temperature of water in his bathtub is AAA degrees. On mixing water, the temperature of the bathtub changes as following:

The temperature rises by 111 degree on mixing 111 litre of hot water.
The temperature drops by 111 degree on mixing 111 litre of cold water.

Determine whether he can set the temperature to BBB degrees for a perfect bath.

Input Format

The first line of input will contain a single integer TTT, denoting the number of test cases.
Each test case consists of four space-separated integers A,B,X,A, B, X,A,B,X, and YYY — the initial temperature of bathtub, the desired temperature of bathtub, the amount of hot water in litres, and the amount of cold water in litres respectively.


Output Format
For each test case, output on a new line, YES if Chef can get the desired temperature for his bath, and NO otherwise.
You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints


1≤T≤20001 \leq T \leq 20001≤T≤2000
20≤A,B≤4020 \leq A, B \leq 4020≤A,B≤40
0≤X,Y≤200 \leq X, Y \leq 200≤X,Y≤20


Sample 1:
InputOutput4
24 25 2 0
37 37 2 9
30 20 10 9
30 31 0 20
YES
YES
NO
NO

Explanation:

Test case 111: The initial temperature of water is 242424 and the desired temperature is 252525. Chef has 222 litres of hot water. He can add 111 litre hot water in the tub and change the temperature to 24+1=2524+1=2524+1=25 degrees.
Test case 222: The initial temperature of water is 373737 and the desired temperature is also 373737. Thus, Chef does not need to add any more water in the bathtub.
Test case 333: The initial temperature of water is 303030 and the desired temperature is 202020. Chef needs to add 101010 litres of cold water to reach the desired temperature. Since he only has 999 litres of cold water, he cannot reach the desired temperature.
Test case 444: The initial temperature of water is 303030 and the desired temperature is 313131. Chef needs to add 111 litre of hot water to reach the desired temperature. Since he has no hot water, he cannot reach the desired temperature.