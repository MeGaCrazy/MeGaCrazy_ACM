#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(),v.end()
using namespace std;
int main() {
	vector <int>v; int n;
	while (cin >> n) {
		v.push_back(n);
		sort(all(v));
		if (v.size() % 2 != 0)cout << v[(v.size()+1)/2-1] << endl;
		else cout << (v[(v.size())/2] + v[(v.size()) / 2-1] )/2 << endl;
	}
}