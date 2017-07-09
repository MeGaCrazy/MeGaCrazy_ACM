#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	while(cin>>s,s!="END"){
	if (s.length() == 1 || s[0]=='1') {
		cout << 1 << endl;
	}
	else
	{   
		int current = 1e9, t = 1;
		for (int i = s.length(); i > 0; i--) {
			if (current > (int)s[i - 1]) {	t = i+1;current = (int)s[i - 1];}
		}cout << t << endl;
	}
	}
}