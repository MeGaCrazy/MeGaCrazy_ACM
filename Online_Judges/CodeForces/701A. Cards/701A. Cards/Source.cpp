#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[102][102] = {0}, a[102], n, sum = 0, v[102] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		arr[a[i]][v[a[i]]++] = i+1;
		sum += a[i];
	}
	sort(a, a+n);  n /= 2;  sum /= n;
	for (int j=0; j < n; j++) {
		cout << arr[a[j]][--v[a[j]]]<<" "<< arr[sum - a[j]][--v[sum - a[j]]] << endl;
	}
}