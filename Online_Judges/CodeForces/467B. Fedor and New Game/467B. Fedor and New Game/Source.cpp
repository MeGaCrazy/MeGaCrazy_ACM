#include <iostream>
#include <bitset>
using namespace std;
int main() {
	int n, count = 0, m, k, arr[10001];
	cin >> n >> m >> k;
	for (int i = 0; i < m+1; i++) {cin >> arr[i];}
	for (int i = 0; i < m; i++) {
		bitset<20>a = (arr[m] ^ arr[i]);
		if (a.count() <= k)count++;
	}cout << count << endl;
}