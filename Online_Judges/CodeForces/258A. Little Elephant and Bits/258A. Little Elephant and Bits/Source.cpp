#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	if (s.find('0')<0)
		s.erase(s.begin()+0);
	else
		s.erase(s.begin() + s.find('0'));
	cout << s;
}

