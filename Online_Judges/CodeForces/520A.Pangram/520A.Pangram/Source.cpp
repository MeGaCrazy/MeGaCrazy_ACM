#include <iostream>
#include<string>
#include <set>

using namespace std;
int main() {
	string str;int number; set <char>s;
	cin >> number;cin >> str;
	for (int i = 0; i <number; i++) {
		if (str[i] >= 65 && str[i] < 97) {
			str[i] += 32;}
		s.insert(str[i]);
	   }
	if (s.size() == 26) {cout << "YES" << endl;}
	else {cout << "NO" << endl;}





}