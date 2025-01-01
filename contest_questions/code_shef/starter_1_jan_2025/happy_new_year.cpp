/*
Happy New Year!

Currently, it is X:00X:00 hours on December 31st31st and you are wondering how many hours are left till midnight.

For the purposes of this problem, we use a 2424 hour system. So, XX can range from 00 to 2323, and you need to tell the number of hours left till 00:0000:00 of the next day.
Input Format

    The first and only line of input contains a single integer XX.

Output Format

For each test case, output on a new line the number of hours left till midnight
Constraints

    0≤X≤230≤X≤23

Sample 1:
Input
Output

0

24

Explanation:

Right now, its 00:0000:00 or 1212 AM on 31st31st December. That means a whole day, i.e. 2424 hours is left till the new year.
Sample 2:
Input
Output

23

1

Explanation:

It is 23:0023:00 or 1111 PM. Only 11 hour is left!
acceptedAccepted
13843
total-SubmissionsSubmissions
19260
accuracyAccuracy
86.21
Did you like the problem statement?
15 users found this helpful
More Info
Time limit1 secs
Memory limit1.5 GB
Source Limit50000 Bytes

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int X ;
	cin>>X;
	cout<<24-X<<endl;
	
	return 0;
	
	

}
