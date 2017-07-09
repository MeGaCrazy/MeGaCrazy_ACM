#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, sum = 0,neg=0,postv=0,pos, dir, con[] = { 1,-1 };
	pair<int, int>m[101];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m[i].first >> m[i].second;
		if (m[i].first > 0)postv++; else neg++;
	}sort(m, m + n); 
	if (postv > neg)pos = neg,dir=0; else pos = neg - 1,dir=1;
	for (int i = pos; i >= 0 && i < n; i += con[dir]) {
		if (m[i].first != 0)sum += m[i].second, dir = (++dir) % 2, m[i].first = 0;
	}cout << sum << endl;
}