#include <iostream>
using namespace std;
int main() { 
	char s[2];
	cin >> s[0] >> s[1];
	if ((s[0] == 'a' || s[0] == 'h') && (s[1] == '1' || s[1] == '8'))cout << 3 << endl;
	else if (s[0] == 'a' || s[0] == 'h' || s[1] == '1' || s[1] == '8')cout << 5 << endl;
	else cout << 8 << endl;
}