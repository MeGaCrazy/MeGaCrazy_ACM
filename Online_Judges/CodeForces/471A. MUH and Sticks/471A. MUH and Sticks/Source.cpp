#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
	int a;
	vector <int>s(10);
	for (int i = 0; i < 6; i++) {cin >> a;s[a]++;}
	sort(s.begin(), s.end());
	if (s[9] > 5 || s[8] == 2 && s[9] == 4) {cout << "Elephant" << endl;}
	else if (s[9] >= 4) {cout << "Bear" << endl;}
	else cout << "Alien" << endl;
}