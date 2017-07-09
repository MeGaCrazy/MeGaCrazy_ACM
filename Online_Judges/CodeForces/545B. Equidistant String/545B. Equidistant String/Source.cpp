#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2; int count = 0;
	cin >> s1 >> s2; int length = s1.length();
	for (int i = 0; i < length; i++)if (s1[i] == s2[i])count++;
	if ( (length - count) % 2 != 0) { cout << "impossible" << endl; return 0;}
	else
	{
		int count = 1;
		for (int i = 0; i < length; i++) {
			if (s1[i] == s2[i] && s1[i] == '1')cout << '0';
			else if (s1[i] == s2[i] && s1[i] == '0')cout <<'1';
			else if (count % 2 != 0)cout << s1[i],count++;
			else cout << s2[i], count++;
		}cout << endl;
	}
}