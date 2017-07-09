#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <vector>
#include <utility>
#include <string.h>
#include <queue>
#include <set>
#include <map>
#define lp1(i,a,b) for(int i=a;i<int(b);i++)
#define lp(i,n) for(int i=0;i<(int)n;i++)
#define clr(x,y) memset(x,y,sizeof(x))
#define pb(x) push_back(x)
#define F first
#define S second
#define ll  long long
#define OO   long long OO=2e9
#define all(v)    v.beign(),v.end() 
using namespace std;
typedef pair<int, int>ii;
typedef vector<int>vi;
typedef vector<ii>vii;
typedef vector<vii>adjl;
class unionFind {
private: vi p,size,rank;
public :
	unionFind(int n) {
		 size.assign(n, 0); rank.assign(n, 0);
		 p.assign(n, 0);
		 lp(i, n) { p[i] = i; size[i] = 1; }
	}
	int findSet(int i) {
		return p[i] == i ? i : p[i] = findSet(p[i]);
	}
	bool isSameSet(int i, int j) {
		return findSet(i) == findSet(j);
	}
	void unionSet(int i, int j) {
		if (!isSameSet(i, j)) {
			int x = findSet(i), y = findSet(j);
			if (rank[x] < rank[y]) swap(x, y);
		   	 p[y] = x;
			 size[x] += size[y];
			 if (rank[x] == rank[y])rank[x]++;
		}
	}
	int sizeUnion(int i) {
		return size[i];
	}
};

int main() {
	int n, m, a,k;
	//freopen("Text.txt", "r", stdin);
	while (scanf("%d%d", &n, &m)!=EOF) {
		if (!n&&!m) {
			break;
		}
		unionFind uf(n + 1);
		for (int i = 0; i < m; i++) {
			scanf("%d", &k);
			 vi v;
			for (int i = 0; i < k; i++) {
				scanf("%d", &a);
				v.push_back(a);
			}
			int length = v.size();
			for (int i = 0; i <length-1; i++) {
				uf.unionSet(v[i], v[i + 1]);
			}
		}
		printf("%d\n", uf.sizeUnion(uf.findSet(0)));
	}
}
