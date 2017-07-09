#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;
int main() {
	string s1, s2, s;
	map<string, string>m;
	while (getline(cin,s)&&s[0]!='\0') {
		stringstream ss(s);
		ss >> s1 >> s2;
		m[s2] = s1;
	}
	while (getline(cin,s1) && !s1.empty()) {
		if (m.find(s1) != m.end())cout << m[s1] << endl; else cout << "eh" << endl;
	}
}