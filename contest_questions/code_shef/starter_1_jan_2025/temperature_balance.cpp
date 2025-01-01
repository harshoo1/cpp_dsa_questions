/*
Temperature Balance

There are NN chambers of water in a line. Between the ii-th chamber and the (i+1)(i+1)-th chamber for each 1≤i<N1≤i<N, there is a wall blocking heat from moving between the two chambers. The water in the ii-th chamber has a temperature level of AiAi​. Additionally, it is known in advance that the sum of AiAi​ is 00.

Each second, you lift exactly one wall, letting heat move between two chambers. Then, the temperature level of the hotter side decreases by 11, while that of the colder side increases by 11. Formally:

    Each second, you choose an integer ii (1≤i<N1≤i<N), and lift the wall between the ii-th chamber and the (i+1)(i+1)-th chamber. Then, the following happens.
        If Ai>Ai+1Ai​>Ai+1​ currently, the two temperature values change to Ai:=Ai−1Ai​:=Ai​−1 and Ai+1:=Ai+1+1Ai+1​:=Ai+1​+1 the exact next second.
        If Ai<Ai+1Ai​<Ai+1​ currently, the two temperature values change to Ai:=Ai+1Ai​:=Ai​+1 and Ai+1:=Ai+1−1Ai+1​:=Ai+1​−1 the exact next second.
        If Ai=Ai+1Ai​=Ai+1​ currently, nothing happens for one second.
    After this second, the chamber closes.

Please find the minimum number of seconds needed to make all temperature levels exactly 00. It can be shown that it is always possible to make all temperature levels exactly 00 in a finite number of seconds.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first line of input contains NN - the number of chambers
        The second line contains NN integers, A1,A2,...,ANA1​,A2​,...,AN​ representing the temperature levels of the chambers.

Output Format

For each test case, print the minimum seconds needed.
Constraints

    1≤T≤1041≤T≤104
    1≤N≤5⋅1051≤N≤5⋅105
    −106≤Ai≤106−106≤Ai​≤106
    The sum of AiAi​ over all 1≤i≤N1≤i≤N is exactly 00.
    The sum of NN over all test cases won't exceed 5⋅1055⋅105.

Sample 1:
Input
Output

5
4
1 0 0 -1
10
2 0 1 0 0 0 0 -1 0 -2
8
2 0 -1 0 0 1 0 -2
10
2 0 0 0 1 -1 0 0 0 -2
14
6 0 0 3 0 -4 0 1 0 0 0 -10 0 4

3
23
11
19
78

Explanation:

Test Case 1 : One can make all temperature levels 00 in 33 seconds by the following process.

    Second 00: Lift the wall between the 11st chamber and the 22nd chamber. Then aa becomes [0,1,0,−1][0,1,0,−1] at Second 11.
    Second 11: Lift the wall between the 22nd chamber and the 33rd chamber. Then aa becomes [0,0,1,−1][0,0,1,−1] at Second 22.
    Second 22: Lift the wall between the 33rd chamber and the 44th chamber. Then aa becomes [0,0,0,0][0,0,0,0] at Second 33.

It can be shown that one cannot make all temperature levels 00 in 22 seconds. Therefore, the minimum answer is 33.
acceptedAccepted
5290
total-SubmissionsSubmissions
11731
accuracyAccuracy
52.32
Did you like the problem statement?
31 users found this helpful
More Info
Time limit3 secs
Memory limit1.5 GB
Source Limit50000 Bytes

*/