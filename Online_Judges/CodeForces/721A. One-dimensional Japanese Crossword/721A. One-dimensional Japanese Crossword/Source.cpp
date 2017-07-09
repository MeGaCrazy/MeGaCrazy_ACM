#include <string>
#include <iostream>
using namespace std;
int main() {
	int n,arr[101],j=0, count = 0, number = 0; string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'B')count++;
	    if (s[i] == 'W'&& count > 0 || s[i]=='B'&&i==n-1) { arr[j++] = count; count = 0; number++;}
	}cout << number << endl;
	for (int i = 0; i < j; i++) { if (arr[i] > 0)cout << arr[i] << " "; }if (number > 0)cout << endl;
}