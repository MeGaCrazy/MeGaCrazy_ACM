#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[103], n, s, t, sum1 = 0,sum2=0;
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> arr[i];
	cin >> s >> t;
	if (s > t)swap(s, t);
	for (int i = s; i < t; i++)sum1 += arr[i];
	for (int i = t; i!= s; ++i, i %= n) {
		if (i == 0)i = n;
	    sum2 += arr[i];
	}cout << min(sum1, sum2) << endl;
}