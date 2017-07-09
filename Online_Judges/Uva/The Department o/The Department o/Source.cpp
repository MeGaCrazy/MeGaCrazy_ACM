#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
	map<int, int>m; int n;
	vector<int>v;
	while (scanf("%d", &n) != EOF) {
		if (!m[n]) {
			v.push_back(n);
		}
		m[n]++;
	}
	int length = v.size();
	for (int i = 0; i < length; i++) {
		cout << v[i] << " " << m[v[i]] << endl;
	}
}