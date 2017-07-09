#include <set>
#include <stdio.h>
using namespace std;
int main() {
	int n, m, a;
	while (scanf("%d", &n) && n) {
		multiset<int>s;
		multiset<int>::iterator itrs = s.begin(), itre = s.end();
		long long sum = 0;
		while (n--) {
			scanf("%d", &m);
			for (int i = 0; i < m; i++) {
				scanf("%d", &a);
				s.insert(a);
			}
			if (s.size() >= 2) {
			  itrs = s.begin(), itre = s.end();
				itre--;
			}
			sum += *itre - *itrs;
			s.erase(itrs); s.erase(itre);
		}
		printf("%lld\n", sum);
	}
}