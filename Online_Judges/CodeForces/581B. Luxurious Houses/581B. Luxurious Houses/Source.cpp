#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, i = 0, arr[100001], best = 0, temp;
	for (cin >> n; i < n; i++) { cin >> arr[i]; }
	for (int i = n - 1; i >= 0; i--) {
		best < arr[i] ? (temp = arr[i], arr[i] = 0) : best == arr[i] ? (arr[i] = 1) : (arr[i] = best + 1 - arr[i]);
		best = max(best, temp);
	}for (int i = 0; i < n; i++) { cout << arr[i] << " "; }cout << endl;
}