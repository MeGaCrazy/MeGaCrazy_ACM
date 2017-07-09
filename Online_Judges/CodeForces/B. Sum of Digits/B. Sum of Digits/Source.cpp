#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int sz = s.length(); long long n = 0;
	if (sz == 1) {
		printf("0");
	}
	else {
		int ans = 1;
		for (int i = 0; i < sz; i++) {
			n += (s[i] - '0');
		}
		while (n >= 10) {
			ans++;
			long long  tmp = 0;
			while (n) {
				tmp += (n % 10);
				n /= 10;
			}
			n = tmp;
		}
		printf("%d", ans);
	}
}