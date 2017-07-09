#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int n; string s;
	while (cin >> n, n) {
		cin >> s;
		int length = s.length(), group = s.length() / n;
		for (int i = 0; i + group <= length; i += group) {
			reverse(s.begin()+i, s.begin()+ (i + group));
		}cout << s << endl;
	}
}