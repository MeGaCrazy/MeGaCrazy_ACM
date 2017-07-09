//============================================================================
// Name        : 11235.cpp
// Author      : Michael
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
class segmenttree {
private:
	vi  st, v;
	int n;
	void build(int s, int e, int p) {
		if (s == e) {
			st[p] = s;
		}
		else {
			build(s, (s + e) / 2, 2 * p);
			build((s + e) / 2 + 1, e, 2 * p + 1);
			st[p] = (v[st[2 * p]] >= v[st[2 * p + 1]]) ? st[2 * p] : st[2 * p + 1];
		}
	}
	int rmq(int i, int j, int s, int e, int p) {
		if (i > e || s > j)return -1;
		if (i <= s&&j >= e)return v[st[p]];
		return max(rmq(i, j, s, (s + e) / 2, 2 * p), rmq(i, j, (s + e) / 2 + 1, e, 2 * p + 1));
	}

public:
	segmenttree(const vector<int> &a) {
		v = a;
		n = a.size();
		st.assign(4 * n, 0);
		build(0, n - 1, 1);
	}
	int maxft(int i, int j) {
		return rmq(i, j, 0, n - 1, 1);
	}

};
int main() {
	int n, q, a, s, e;
//	freopen("bla.txt", "rt", stdin);
	//freopen("file.txt", "wt", stdout);
	while (scanf("%d", &n), n) {
		scanf("%d", &q);
		vi A; map<int, int>mp;
		for (int i = 0; i<n; i++) {
			scanf("%d", &a);
			mp[a]++;
			A.push_back(mp[a]);
		}


		segmenttree st(A);

		for (int i = 0; i<q; i++) {
			scanf("%d %d", &s, &e);
			printf("%d\n", st.maxft(s - 1, e - 1));
		}
	}

}
