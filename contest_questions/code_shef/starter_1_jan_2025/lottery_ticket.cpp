/*
Lottery Tickets

There were NN lottery tickets with numbers AiAi​. Each number was distinct. Chef bought the first ticket, i.e. A1A1​.

He is now wondering whether he won the lottery. Here is how the winner is decided:

    A number XX is decided in the range [1,106][1,106], and then whoever has the closest ticket to XX wins the lottery. If there is a tie, all of them are winners.

How many numbers XX exist such that Chef won the lottery?
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first line of each test case contains NN - the number of sold tickets
        The second line of each test case contains NN integers - A1,A2,...,ANA1​,A2​,...,AN​.

Output Format

For each test case, output on a new line the number of integers XX such that Chef wins the lottery.
Constraints

    1≤T≤1041≤T≤104
    2≤N≤2⋅1052≤N≤2⋅105
    1≤Ai≤1061≤Ai​≤106
    Ai≠AjAi​=Aj​ for all i≠ji=j
    The sum of NN over all test cases does not exceed 2⋅1052⋅105

Sample 1:
Input
Output

3
3
5 1 12
2
10 7
5
3 1 4 5 2

6
999992
1

Explanation:

Test Case 1 : The valid numbers XX are 3,4,5,6,73,4,5,6,7 and 88. Note that 33 is winning despite it being a tie between Chef and the person who bought the 2nd2nd ticket, because in case of a tie all are declared winners.

Test Case 2 : All X≥9X≥9 is winning. Since we are told to count in the range [1,106][1,106], the answer is all XX in [9,106][9,106] which is 999992999992.
acceptedAccepted
1294
total-SubmissionsSubmissions
5476
accuracyAccuracy
25.55
Did you like the problem statement?
22 users found this helpful
More Info
Time limit1 secs
Memory limit1.5 GB
Source Limit50000 Bytes

*/