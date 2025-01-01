/*
Grid Construction (Odd)

This is the odd version of the Grid Construction Problem. Both are worth 50 points each.

You are given an odd integer NN.

Now your task is to construct a grid AA containing NN rows and NN columns such that :

    For every i,j(1≤i,j≤N)i,j(1≤i,j≤N) 1≤Ai,j≤N1≤Ai,j​≤N have to be satisfied.
    For every x(1≤x≤N)x(1≤x≤N), xx appears exactly NN times in AA.
    Let S1S1​ be the sum of elements in the diagonal from top-left to bottom-right and S2S2​ be the sum of elements in the diagonal from top-right to bottom-left, Then :
        Sum of all elements in every 22 adjacent rows has to be equal to S1+S2S1​+S2​.
        Sum of all elements in every 22 adjacent columns has to be equal to S1+S2S1​+S2​.

It can be proven that at least one valid answer exists.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first and only line of input contains NN - the dimension of the grid.

Output Format

For each test case, output NN lines each containing NN integers. The jj-th integer in the ii-th line should represent Ai,jAi,j​ of the grid you constructed.
Constraints

    1≤T≤301≤T≤30
    2≤N≤5002≤N≤500
    NN is odd.
    The sum of NN over all test cases does not exceed 500500.

Sample 1:
Input
Output

1
3

1 3 2
3 2 1
2 1 3

Explanation:

Test Case 1 : Here, S1=6,S2=6S1​=6,S2​=6, and each row, column adds to 66, implying adjacent row, column adds to 12=S1+S212=S1​+S2​. Thus, it is valid.
acceptedAccepted
107
total-SubmissionsSubmissions
832
accuracyAccuracy
14.42
Did you like the problem statement?
7 users found this helpful
More Info
Time limit1 secs
Memory limit1.5 GB
Source Limit
*/