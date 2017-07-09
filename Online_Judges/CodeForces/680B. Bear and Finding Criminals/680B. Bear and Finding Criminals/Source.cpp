#include <iostream>
using namespace std;
int main() {
	int x = 0, n, s, sum = 0, arr[101];
	cin >> n >> s; --s;
	for (int i = 0; i < n; i++) { cin >> arr[i]; sum += arr[i]; }
	for (int i = 1; i < n; i++) {
		if ((s + i) >= n || (s - i) < 0)break;
		if (arr[s + i] + arr[s - i] == 1)sum--;
	}cout << sum << endl;
}