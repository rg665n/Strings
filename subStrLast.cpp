#include <iostream>
#include <string>

using namespace std;

int main() {
	//code
	string str , subStr ;
	
	int i,j,k, T,found;
	cin >> T;
	for (i=1; i<=T;i++) {
            found =0;
        cin >> subStr;
        cin >> str;

        //cout << str.length() << endl;
        //cout << subStr.length() << endl;
        for (j=str.length()-1,k=subStr.length()-1;j>=0 && k>=0 ;j--) {
            //cout << str[j] << j << endl;
            //cout << subStr[k] << k << endl;
            if (str[j] == subStr[k]) {
                k--;
                if(subStr.length() == 1 ) j++;

                //cout << str[j] << endl;
                //cout <<k << j <<endl;
            }
            else { //case of gap
                k=subStr.length()-1;
                //cout << "length="<<k;

            }
            if (k <= 0)
            {
               //cout << "k is 0 " << endl ;
               //cout << j << endl;
               found =1;
               break;
            }
            else found =0;
        }
        if (found ==1) {

                cout << j << endl;
        }
        else
            cout << -1 << endl;
    }
return 0;
}

