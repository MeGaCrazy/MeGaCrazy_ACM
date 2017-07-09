#include <stdio.h>
#include <queue>
#include <functional>
using namespace std;
int main() {
	int n, x;
	while (scanf("%d", &n) && n) {
		priority_queue<int, vector<int>, greater<int>>q;
		long long sum = 0;
		while (n--) {
			scanf("%d", &x);
			q.push(x);
		}
		while (q.size() != 1&&!q.empty()) {
			int a = q.top(); q.pop();
			int b = q.top(); q.pop();
			int cost = a + b;
			sum +=cost;
			q.push(cost);
		}
		printf("%lld\n", sum);
	}
}