/*
Alternate Universe

Codechef has been founded in an alternate universe, and here the rating system works weirdly.

There are NN rated contests, and you will be taking part in them. In the ii-th contest, if your rating RR is at most AiAi​, you can choose to get an increase in your rating in the range [0,Bi][0,Bi​], i.e. you may choose to increase your rating by any integer XX satisfying 0≤X≤Bi0≤X≤Bi​.

Further, after every contest and it's corresponding rating change, you also lose one rating point to combat rating inflation.

If your rating ever falls below 00, you are banned from the site for your poor performance. Find the minimum initial rating R0R0​ such that you don't get banned from the site during and after all NN contests. Note that R0≥0R0​≥0 must hold.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first line of each test case contains NN - the number of contests
        The second line contains NN integers - A1,A2,...,ANA1​,A2​,...,AN​
        The third line contains NN integers - B1,B2,....,BNB1​,B2​,....,BN​

Output Format

For each test case, output on a new line the minimum initial rating R0R0​ to not get banned.
Constraints

    1≤T≤1041≤T≤104
    1≤N≤1061≤N≤106
    0≤Ai,Bi≤1090≤Ai​,Bi​≤109
    The sum of NN over all test cases does not exceed 106106.

Sample 1:
Input
Output

3
3
1 0 3
1 0 1
3
1 3 4
10 10 10
5
1 0 1 0 1
0 1 0 1 0

1
0
5

Explanation:

Test Case 1 : If we initially have a rating of 11,

    In the 1st1st contest, we can increase our rating by some number in the range [0,B1][0,B1​], i.e. [0,1][0,1]. We choose to increase by 11. The new rating is 22 but then our rating decreases by 11 to combat rating inflation. Thus, our updated rating is 11.
    The updated rating becomes 00 as we gain 00 but lose 11 to combat rating inflation.
    The updated rating becomes 00 because we increase by 11 but then lose 11 to rating inflation.

Thus, we managed to keep our rating non-negative with R0=1R0​=1. It can be shown that R0=0R0​=0 is not valid.
acceptedAccepted
28
total-SubmissionsSubmissions
573
accuracyAccuracy
5.24
*/