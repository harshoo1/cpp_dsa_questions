/*


You are given two positive integers NN and KK.

A positive integer XX is called a Good Number if XX can be written as i1 ∣ i2 ∣ ⋯ ∣ iMi1​ ∣ i2​ ∣ ⋯ ∣ iM​ ††, where K≤i1<i2<⋯<iM<N+KK≤i1​<i2​<⋯<iM​<N+K and 1≤M≤N1≤M≤N.

Now your task is to answer QQ queries of the following type:

    L,RL,R : count the number of Good Numbers between ll and rr inclusive.

†† Given two nonnegative integers aa and bb, a ∣ ba ∣ b denotes the Bitwise OR operator of aa and bb.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first line of each test case contains NN, KK and QQ.
        The next QQ lines each contain 22 integers - the parameters LL and RR for this query.

Output Format

For each test case, for each query, count the number of good integers between LL and RR.
Constraints

    1≤T≤1041≤T≤104
    1≤N,K≤10181≤N,K≤1018
    1≤Q≤1061≤Q≤106
    1≤L≤R≤10181≤L≤R≤1018
    The sum of QQ over all test cases does not exceed 106

    input 
    4
3 1 3
1 2
2 4
5 8
6 4 5
1 10
34 40
10 10
9 20
5 14
17 11 5
14 24
21 30
16 16
1 10
1 100
189 10007 1
1 1000000000000000000

output
2
2
0
6
0
0
5
8
11
10
1
0
21
233

Explanation:

Test Case 1 : It can be shown that 1,21,2 and 33 are the only good numbers.



*/