#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[101][101] = { 0 }, k, n, a[101], v[101] = {0}, sum = 0, count = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		arr[a[i]][v[a[i]]++] = i + 1;
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
	   	sum += a[i]; count++; 
		if (sum > k) { count--; break; }
	}  
	cout << count << endl;
	for (int i = 0; i < count; i++) {
		cout << arr[a[i]][--v[a[i]]] << " ";
	}if (count > 0)cout << endl;



}