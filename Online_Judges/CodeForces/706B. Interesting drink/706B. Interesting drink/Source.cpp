#include <iostream>
#include <algorithm>
using namespace std;
int v[1000001] = { 0 };
int main() {
	int n, q, y, arr1[100001];
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr1[i];
	sort(arr1, arr1 + n);
	for (int i = 1,j=arr1[0]; i < n; i++)while (j < arr1[i])v[j++] = i;
	v[arr1[n - 1]] = n;   cin >> q;
	for (int i = 0; i < q; i++){
		cin >> y;
		y < arr1[0] ? cout << 0 << endl : y >= arr1[n - 1] ? cout << n << endl : cout << v[y] << endl;
	}
}