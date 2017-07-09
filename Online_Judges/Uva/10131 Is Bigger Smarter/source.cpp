#include <stdio.h>
#include <algorithm>
#include <stack>
#include <utility>
#include <vector>
using namespace std;
typedef pair<int, int>ii;
typedef vector<pair<int,ii> >vii;
const int N = 1001;
int n, dp[N], pos[N], seq[N], len, lasti;
ii w[N];
vii tmp;
void LIS() {
	len = 0;
	for (int i = 0; i<n; i++) {
		int index = lower_bound(seq, seq + len, w[i].first) - seq;
		pos[index] = i;
		seq[index] = w[i].first;
		dp[i] = index ? pos[index - 1] : -1;
		if (index + 1>len) { len = index + 1; lasti = i; }
	}
}
void print(int a) {
	int x = a;
	stack<int>s;
	for (; dp[x] >= 0; x = dp[x])s.push(w[x].second+1);
	printf("%d\n", w[x].second+1);

	for (; !s.empty(); s.pop()) {
		printf("%d\n", s.top());
	}
}

int main() {
	n = 0; int a, b;
	freopen("in.txt", "r", stdin);
	while (scanf("%d %d", &a, &b) != EOF) {
		tmp.push_back(make_pair(b,make_pair(a,n)));
		n++;
	}
	sort(tmp.rbegin(), tmp.rend());

	for (int i = 0; i<n; i++) {
		w[i].first = tmp[i].second.first;
		w[i].second = tmp[i].second.second;
	}
	LIS();
	printf("%d\n", len);
	print(lasti);
}