#include <stdio.h>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
#define inval 5
typedef vector<int> vi;
class segmentTree {
private:
	vi v, st, lazy;
	int n;
	void build(int s, int e, int p) {
		if (s == e)
			st[p] = v[s];
		else {
			build(s, (s + e) / 2, 2 * p);
			build(1 + (s + e) / 2, e, 2 * p + 1);
			st[p] = st[2 * p] + st[2 * p + 1];
		}
	}

	void updateRange(int i, int j, int s, int e, int p, char to) {
		if (lazy[p] != inval) {
			st[p] = (e - s + 1) * lazy[p];
			if (s != e) {
				lazy[2 * p] =lazy[2 * p + 1] = lazy[p];
			}
			lazy[p] = inval;
		}
		if (s > j || i > e)
			return;

		if (i <= s && j >= e) {
			if (to == 'F') {
				st[p] = (e - s + 1);
			} else if (to == 'E')
				st[p] = 0;
			else {
				st[p] = (e - s + 1) - st[p];
			}
			if (s != e) {
				lazy[2 * p] = st[p] ? 1 : 0;
				lazy[2 * p + 1] = st[p] ? 1 : 0;
			}
			return;
		} else {
			updateRange(i, j, s, (s + e) / 2, 2 * p, to);
			updateRange(i, j, 1 + (s + e) / 2, e, 2 * p + 1, to);
			st[p] = st[2 * p] + st[2 * p + 1];
		}

	}
	int Query(int i, int j, int s, int e, int p) {

		if (lazy[p] != inval) {
			st[p] = (e - s + 1) * lazy[p];
			if (s != e) {
				lazy[2 * p] = st[p] ? 1 : 0;
				lazy[2 * p + 1] = st[p] ? 1 : 0;
			}
			lazy[p] = inval;
		}
		if (s > j || i > e)
			return 0;
		if (i <= s && j >= e)
			return st[p];
		return (Query(i, j, s, (s + e) / 2, 2 * p)
				+ Query(i, j, (s + e) / 2 + 1, e, 2 * p + 1));
	}
public:
	segmentTree(const vector<int>&a) {
		v = a;
		n = (int) a.size();
		st.assign(4 * n, 0);
		lazy.assign(4 * n, inval);
		build(0, n - 1, 1);
	}
	void Update(int i, int j, char to) {
		updateRange(i, j, 0, n - 1, 1, to);

	}
	int Query(int i, int j) {
		return Query(i, j, 0, n - 1, 1);
	}
};
int main() {
	int t, cas = 1;
	freopen("input.txt", "r", stdin);
	freopen("outt.txt", "w", stdout);
	scanf("%d", &t);
	while (t--) {
		int m, q, n, a, b, pirt;
		char stat;
		string s;
		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			scanf("%d %d", &n, &pirt);
			for (int i = 0; i < n; i++) {
				s += to_string(pirt);
			}
		}
		vi A;
		int length = s.length();
		for (int i = 0; i < length; i++) {
			A.push_back((s[i] - '0'));
		}
		int prn = 1;

		segmentTree st(A);

		scanf("%d", &q);
		printf("Case %d:\n", cas++);
		for (int i = 0; i < q; i++) {
			scanf(" %c %d %d", &stat, &a, &b);
			if (stat == 'S') {
				printf("Q%d: %d\n", prn++, st.Query(a, b));
			} else {
				st.Update(a, b, stat);
			}
		}

	}

}
