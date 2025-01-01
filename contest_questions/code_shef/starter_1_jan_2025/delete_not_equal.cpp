/*
 Delete Not Equal

Given a binary string SS, we can perform the following operation as many times as we want:

    Choose ii such that 1≤i<∣S∣1≤i<∣S∣ and Si≠Si+1Si​=Si+1​, and either delete SiSi​ or Si+1Si+1​ from the string (concatenate the remaining parts of the string).

Find the minimum final length of the string SS after performing some (possibly 00) number of operations.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first line contains NN - the length of the string
        The second line contains SS - a binary string

Output Format

For each test case, output on a new line the minimum final length
Constraints

    1≤T≤1001≤T≤100
    1≤N≤1001≤N≤100
    ∣S∣=N∣S∣=N
    Si∈{0,1}Si​∈{0,1}

Sample 1:
Input
Output

3
4
1010
2
00
5
00001

1
2
1

Explanation:

Test Case 1 : Perform the following operations:

    Initially S=1010S=1010
    Pick i=1i=1, verify S1≠S2S1​=S2​, and then we choose to delete S1S1​. The new SS is 010010.
    Pick i=2i=2, verify S2≠S3S2​=S3​, and then we choose to delete S3S3​. The new SS is 0101.
    Pick i=1i=1, verify S1≠S2S1​=S2​, and then we choose to delete S1S1​. The new SS is 11.

Thus, the final string length is 11.
acceptedAccepted
2961
total-SubmissionsSubmissions
10420
accuracyAccuracy
29.78
Did you like the problem statement?
28 users found this helpful
More Info
Time limit1 secs
Memory limit1.5 GB
Source Limit50000 Bytes

*/

