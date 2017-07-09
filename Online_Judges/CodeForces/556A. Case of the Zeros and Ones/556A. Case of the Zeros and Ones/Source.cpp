#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
	string s; int n, sum = 0; cin >> n >> s;
	for (int i = 0; i < n; i++) { s[i] == '0' ? sum++ : sum--; };
	cout << abs(sum) << endl;
}