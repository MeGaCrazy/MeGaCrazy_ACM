#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	int n, a, sum = 0, ans = 0;
	scanf("%d", &n);
	vector<int>v;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		v.push_back(a);
		sum += a;
	}
	for (int i = 0; i < n; i++) {
		if (!((sum - v[i]) % 2))ans++;
	}printf("%d", ans);
}