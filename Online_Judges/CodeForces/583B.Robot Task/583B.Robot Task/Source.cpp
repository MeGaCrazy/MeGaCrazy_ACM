#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	// unsolved
	int n, arr[1001], move = 0, x = 0; string s;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n; i++) {
		if (x >= arr[i])x++; else s += arr[i] + '0';
	}if (x != n)move++;{
	  reverse(s.begin(), s.end());
	  int length = s.length();
	  for (int i = 0; i < length; i++) {
		  if (x >= (s[i] - '0'))x++; else move++;
	  }
	}cout << move << endl;
}