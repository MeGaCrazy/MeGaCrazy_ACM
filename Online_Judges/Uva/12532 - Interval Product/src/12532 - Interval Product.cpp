//============================================================================
// Name        : 12532.cpp
// Author      : Michael
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;
typedef vector<int> vi;
class stupidTree {
private:
	vi v, st;
	int n;
	void build(int s, int e, int p) {
		if (s == e) {
			st[p] = v[s - 1];
			return;
		} else {
			build(s, (s + e) / 2, 2 * p);
			build(1 + (s + e) / 2, e, 2 * p + 1);
			st[p] = st[p * 2] * st[2 * p + 1];
		}
	}
	void change(int i, int val, int s, int e, int p) {
		if (s > i || i > e)
			return;
		if (i == s && i == e)
			st[p] = val;
		else {
			int mid = (s + e) / 2;

			if (i <= mid)
				change(i, val, s, (s + e) / 2, 2 * p);
			else
				change(i, val, (s + e) / 2 + 1, e, 2 * p + 1);
			st[p] = st[p * 2] * st[2 * p + 1];
		}
	}
	int Query(int i, int j, int s, int e, int p) {

		if (i <= s && j >= e)
			return st[p];
		int mid = (s + e) / 2;

		if (j <= mid)
			return (Query(i, j, s, (s + e) / 2, 2 * p));

		else if (i > mid)
			return (Query(i, j, (s + e) / 2 + 1, e, 2 * p + 1));

		else {

			return (Query(i, j, s, (s + e) / 2, 2 * p)
					* Query(i, j, (s + e) / 2 + 1, e, 2 * p + 1));
		}

	}
public:
	stupidTree(const vector<int>&A) {
		v = A;
		n = A.size();
		//n = 2 * pow(2.0, floor(log(n) / log(2) + 1));
		st.assign(4 * n, 0);
		build(1, n, 1);
	}
	void change(int i, int val) {
		change(i, val, 1, n, 1);
	}
	int Query(int i, int j) {
		return Query(i, j, 1, n, 1);
	}
};
int main() {
	int n, k;
//	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	while (scanf("%d %d", &n, &k) != EOF) {
		vi A;
		for (int i = 0, a; i < n; i++) {
			scanf("%d", &a);
			A.push_back(a);
		}
		stupidTree st(A);
		char s;
		string str;
		for (int i = 0, a, b; i < k; i++) {
			scanf(" %c %d %d", &s, &a, &b);
			if (s == 'C')
				st.change(a, b);
			else {
				if (!st.Query(a, b))
					str += "0";
				else if (st.Query(a, b) < 0)
					str += "-";
				else
					str += "+";
			}
		}
		cout << str << endl;
	}
	return 0;
}
