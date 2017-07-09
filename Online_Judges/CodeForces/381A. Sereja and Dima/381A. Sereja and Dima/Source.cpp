#include <iostream>
using namespace std;
int main() {
	int n, arr[1001],count=0,serej = 0, dima = 0;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	int end = n - 1, start = 0;
	while (count != n) {
		if (arr[start] > arr[end]) {
			count++ % 2 == 0 ? serej += arr[start++] : dima += arr[start++];
		}else count++ % 2 == 0 ? serej += arr[end--] : dima += arr[end--];
	}cout << serej << " " << dima << endl;
}