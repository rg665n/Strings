/*Given a no N you can perform an operation in it in which you can change a digit 5 to 6 and vice versa. Now your task is to print the sum of the max no and the min no obtained by performing such operations.*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	//code
	string str ,mins,maxs;
	int i ,mx,mn, T,sum;
	cin >> T;
	for (i=1; i<=T;i++) {
	    cin.ignore();
        cin >> str;
        mins=str;
        maxs=str;
        replace( mins.begin(), mins.end(), '5', '6');
        replace( maxs.begin(), maxs.end(), '6', '5');
        //cout << maxs << endl;
        //cout << mins << endl;
        mx=stoi(maxs);
        mn=stoi(mins);
        
        //cout << mx << endl;
        //cout << mn << endl;

        sum = mx+mn;
        cout << sum << endl;

	}

	return 0;
}
