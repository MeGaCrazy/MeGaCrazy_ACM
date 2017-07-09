#include <stdio.h>
#include <set>
using namespace std;
int main() {
	int n, m, a;
	while (scanf("%d%d", &n, &m)) {
		if (!n&&!m)break;
		set<int>s;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a);
			s.insert(a);
		}
		for (int i = 0; i < m; i++) {
			scanf("%d", &a);
			s.insert(a);
		}
		printf("%d\n", (n + m) - s.size());
	}
}