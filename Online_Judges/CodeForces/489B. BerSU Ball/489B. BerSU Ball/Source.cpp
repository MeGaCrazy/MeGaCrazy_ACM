#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n,a,bla[102], m, count = 0, v[102] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {cin >> a;v[a]++;}
    cin >> m;
	for (int i = 0; i < m; i++) {cin >> bla[i];}
	sort(bla, bla + m);
	for (int i = 0; i < m; i++) {
		if (v[bla[i] - 1]) v[bla[i] - 1]--, count++;
		else if (v[bla[i]])  v[bla[i]]--   , count++;
		else if (v[bla[i]+1])v[bla[i]+1]--,count++;
	}cout << count << endl;
}