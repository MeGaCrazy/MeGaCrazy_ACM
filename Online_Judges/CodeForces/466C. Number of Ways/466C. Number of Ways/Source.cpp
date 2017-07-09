#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int arr[500001];
int main() {
	// unsolved 
	map <int, int>v;
	int n, j = 0, best = 0;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n-2; i++) {
		int temp = (v[arr[i] + arr[i + 1] + arr[i + 2]]++);
		best = max(v[arr[i] + arr[i + 1] + arr[i + 2]], best);
	}cout << best << endl;
}