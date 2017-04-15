//Unusual Sort

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// trim from start (in place)
static inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
            std::not1(std::ptr_fun<int, int>(std::isspace))));
}

// trim from end (in place)
static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(),
            std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}

int main() {
	//code

	int i,j,k,l ,T;

	cin >> T;
	for (i=1; i<=T;i++) {
        string str , strU,strL,strN;
        //cin >> str;
        cin.ignore() ;
        //getline(cin,str);
        cin >> str;
        trim(str);
        for(j=0,k=0,l=0;j<str.length();j++) {
            if (isupper(str.at(j))) {
                strU.push_back(str.at(j));
            }
            else {
                strL.push_back(str.at(j));
            }
        }
        //cout << strU <<endl;
        sort(strU.begin(),strU.end());
        //cout << strU <<endl;
        //cout << strL << endl;
        sort(strL.begin(),strL.end());
        //cout << strL <<endl;
        while(k < strU.length() && l < strL.length()) {
            strN.append(strU,k,1);
            k++;
            strN.append(strL,l,1);
            l++;
        }

        while (k < strU.length()) {
            strN.append(strU,k,1);
            k++;
        }
        while (l < strL.length()) {
            strN.append(strL,l,1);
            l++;
        }
        cout << strN << endl;

	}

	return 0;
}
