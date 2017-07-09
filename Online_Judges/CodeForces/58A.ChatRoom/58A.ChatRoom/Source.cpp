#include <iostream>
#include <string>
using namespace std;


int main() {
/*
	string s;
	cin >> s;

	size_t pos = 0;
	while (pos < s.length() && s[pos] != 'h')
		++pos;
	++pos;
	while (pos < s.length() && s[pos] != 'e')
		++pos;
	++pos;
	while (pos < s.length() && s[pos] != 'l')
		++pos;
	++pos;
	while (pos < s.length() && s[pos] != 'l')
		++pos;
	++pos;
	while (pos < s.length() && s[pos] != 'o')
		++pos;

	if (pos < s.length())
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}


	*/
	string word = "hello";
	string type;
	cin >> type;
	int length = type.length();
	int a = 0;
	int i, count = 0;
	for (i = 0; i<length; i++) {
		if (type[i] == word[a]) {
			a++;
			count++;
		}
	}
	if (count == 5)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;





}