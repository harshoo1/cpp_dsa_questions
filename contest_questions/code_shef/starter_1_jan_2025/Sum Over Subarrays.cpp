/*
Sum Over Subarrays

Given a binary string SS, define f(S)=max⁡(# 0s in S, # 1s in S)f(S)=max(# 0s in S, # 1s in S), i.e. the the maximum among frequency of 00 and frequency of 11.

Find the sum of ff over all substrings of SS. Formally, compute ∑L=1N∑R=LNf(SLSL+1...SR)∑L=1N​∑R=LN​f(SL​SL+1​...SR​).
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first line of each test case contains NN - the size of the string
        The second line of each test case contains SS - the binary string.

Output Format

For each test case, output on a new line the sum of ff over all substrings of SS.
Constraints

    1≤T≤1041≤T≤104
    1≤N≤2⋅1051≤N≤2⋅105
    ∣S∣=N∣S∣=N
    Si∈{0,1}Si​∈{0,1}
    The sum of NN over all test cases does not exceed 2⋅1052⋅105.

Sample 1:
Input
Output

5
1
0
2
01
3
110
4
0011
6
101101

1
3
8
15
38

Explanation:

Test Case 2 : There are 33 substrings:

    00 : f(0)=1f(0)=1
    11 : f(1)=1f(1)=1
    0101 : f(01)=1f(01)=1

Thus, the sum is 33.
acceptedAccepted
16
total-SubmissionsSubmissions
1007
accuracyAccuracy
1.69
Did you like the problem statement?
More Info
Time limit1 secs
Memory limit1.5 GB
Source Limit50000 Bytes
​

5
1
0
2
01
3
110
4
0011
6
101101

*/