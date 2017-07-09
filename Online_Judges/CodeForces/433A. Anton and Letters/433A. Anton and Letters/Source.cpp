#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
	set<char>s;
	string s1;
	getline(cin, s1);
	int length = s1.length();
	for (int i = 0; i < length; i++) {
		if (s1[i] >= 97 && s1[i] <= 122) {
			s.insert(s1[i]);
		}
	}
	cout << s.size() << endl;

}