#include <iostream>
#include <map>
using namespace std;
int main() {
	map<char, int>mp;
	char s[4][4] = { 0 };
	for (int i = 0; i < 3; i++) {
		scanf("%s", &s[i]);
		if (s[i][1] == '<') {
			mp[s[i][2]]++;
		}
		else if (s[i][1] == '>') {
			mp[s[i][0]]++;
		}
	}

}