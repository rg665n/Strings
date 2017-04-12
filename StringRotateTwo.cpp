//Check if string is rotated by two places

#include <iostream>
#include <string>

using namespace std;

int main() {
	//code
	string str1 , str2 , str3 , str4;
	int i, T,count=0,anticlock=0,clock=0,stringsnotequal =0;
	cin >> T;
	for (i=1; i<=T;i++) {
        cin >> str1;
        cin >> str2;

    if(str1.length() != str2.length())
                stringsnotequal=1;
        //Clockwise
        str3 = str2.substr(0,2);
        str4 = str2.substr(2,str2.length());
        str4 = str4+str3;
        //cout << str4 <<endl;
        if (str1.compare(str4) == 0 ) {
            clock=1;
        }
        else
            clock=0;

        // Anti Clockwise
        str3 = str2.substr(0,str2.length()-2);
        str4 = str2.substr(str2.length()-2,str2.length());
        str4 = str4+str3;
        //cout << str4 <<endl;
        if (str1.compare(str4) == 0 ) {
            anticlock=1;
        }
        else
            anticlock=0;

        if(stringsnotequal == 0 && ( anticlock ==1 || clock ==1) )
            cout << 1 << endl;
        else
            cout << 0 << endl;
	}

	return 0;
}
