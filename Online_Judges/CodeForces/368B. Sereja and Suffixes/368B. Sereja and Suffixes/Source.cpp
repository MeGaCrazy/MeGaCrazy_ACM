#include <set>
#include <iostream>
using namespace std;
int main() {
	int n, m, arr[100001],l;
	set<int>s;
	cin >> n >> m;
	for (int i =1; i <= n; i++) { cin >> arr[i]; }
	for (int i = n; i >= 1; i--) {s.insert(arr[i]); arr[i] = s.size();}
	while (m--) { cin >> l; cout << arr[l] << endl;}
}