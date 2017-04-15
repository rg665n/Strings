#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T,N;
	cin >> T ;
	cin.ignore();
	string str, rstr;
	for (int i=1;i<=T;i++) {
	        cin >> N;
	        //cin.ignore();
	        cin >> str;
	        string rstr(str);
	        reverse(rstr.begin(),rstr.end());
	        //cout << rstr << endl;
	        if(str == rstr) {
	            cout << 1 << endl;
	        }
	        else {
	            cout << 0 << endl;
	        }
	        
	}
	return 0;
}
