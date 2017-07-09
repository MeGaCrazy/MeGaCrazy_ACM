#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
	int arr[100000], n, least, best;
	cin >> n;
	for (int i = 0; i < n; i++) {cin >> arr[i];}
	cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[0] << endl;
	for (int i = 1; i < n-1; i++) {
		least = min(abs((arr[i] - arr[i - 1])), abs((arr[i] - arr[i + 1])));
		best = max(abs((arr[i] - arr[0])), abs((arr[i] - arr[n - 1])));
		cout << least <<" "<< best << endl;
	}
	cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;




}