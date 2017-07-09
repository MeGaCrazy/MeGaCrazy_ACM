#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main() {
	string s;
	getline(cin, s); 
	int arr[200] = { 0 };
	arr['A'] = 1;
	arr['a'] = 1;
	arr['E'] = 1;
	arr['e'] = 1;
	arr['i'] = 1;
	arr['I'] = 1;
	arr['O'] = 1;
	arr['o'] = 1;
	arr['U'] = 1;
	arr['u'] = 1;
	arr['Y'] = 1;
	arr['y'] = 1; int ans = 0;
	for (int i = s.length()-1;i >= 0; i--) {
		if (!isalpha(s[i]))continue;
		if (isalpha(s[i])&&s[i]!=' ') {
			ans += arr[s[i]];
			break;
		}
	}
	ans? printf("YES") : printf("NO");

}