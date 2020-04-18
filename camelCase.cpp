//Count of camel case characters
/* 
Your friend is new to Programming. He is given a task in the school to find the total number of alphabets in camel case in a string s. Help your friend in doing so.

Input : 
The first line of input contains an integer T denoting the Test cases. Then T test cases follow. Each line of the test case contains a string s.

Output : 
For each test case in a new line print the count of camel case character in the string.

Constraints:
1<=T<=100
1<=|length of string|<=100
 

Example:
Input : 
3
ckjkUUYII
HKJT
njnnk

Output : 
5
4
0

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	//code
	std::string str;
	int i, T,count=0;
	cin >> T;
	for (i=1; i<=T;i++) {
	    cin >> str;
        for(std::string::iterator it = str.begin(); it != str.end(); ++it) {
            if (isupper(*it)) count++;
        }
        cout <<count <<endl;
        count = 0;
	}
	
	return 0;
}
