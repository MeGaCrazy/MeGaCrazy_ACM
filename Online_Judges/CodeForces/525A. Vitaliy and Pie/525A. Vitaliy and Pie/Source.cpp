#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, count = 0, arr[200] = { 0 }; string s;
	cin >> n >> s; int length = s.length();
	for (int i = 0; i < length; i++) {
		if (s[i] >= 97)arr[s[i]]++;
		else if (s[i] >= 65 && s[i] < 97 && arr[s[i] + 32]>0)count++, arr[s[i] + 32]--;
	}cout << (--n) - count << endl;
}