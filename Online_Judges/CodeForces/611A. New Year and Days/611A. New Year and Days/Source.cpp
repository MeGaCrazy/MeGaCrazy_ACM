#include <string>
#include <iostream>
using namespace std;
int main() {
	string s;int x;
	cin >> x;getline(cin, s);
	int pos = s.find("week");
	if (pos > 0) {
		x = (x + 4) % 7;
		if (x == 2 || x == 3)cout << 53 << endl; else cout << 52 << endl;
	}
	else
	{
		if (x <= 29) { cout << 12 << endl; }
		else {x == 30 ? cout << 11 << endl : cout << 7 << endl;}
	}
}
/*

nice code 
#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
cin>>n>>s>>s;
if(s=="week")
cout<<52+(n==6)+(n==5)<<endl;
else
cout<<12-(n==30)-(n==31)*5<<endl;
}
*/