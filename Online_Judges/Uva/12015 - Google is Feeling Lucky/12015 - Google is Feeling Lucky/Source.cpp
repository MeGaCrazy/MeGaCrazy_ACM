#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s[11]; int n, a, i = 1, arr[11] = {0};
	cin >> n;
	while (n--) {
		int t = -1;
		for (int i = 0; i < 10; i++) {
			cin >> s[i] >> arr[i];
			t = max(arr[i], t);
		}cout << "Case #" << i++ << ":" << endl;
		for (int i = 0; i < 10; i++) {
			if (arr[i] == t)cout << s[i] << endl;
		}
	}
}