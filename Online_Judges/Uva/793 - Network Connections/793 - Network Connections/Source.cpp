#include <iostream>
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
typedef vector<ii>vii;
vector<vii>adj1, adj2;
typedef vector<int> vi;
class UnionFind {
private:
	vi p, rank, setSize;
	int numSets;
public:
	UnionFind(int N) {
		setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
		p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i;
	}
	int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
	bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
	void unionSet(int i, int j) {
		if (!isSameSet(i, j)) {
			numSets--;
			int x = findSet(i), y = findSet(j);
			// rank is used to keep the tree short
			if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
			else {
				p[x] = y; setSize[y] += setSize[x];
				if (rank[x] == rank[y]) rank[y]++;
			}
		}
	}
	int numDisjointSets() { return numSets; }
	int sizeOfSet(int i) { return setSize[findSet(i)]; }
};

int main() {
	 freopen("in.in", "r", stdin);
	// freopen("out.out", "w", stdout);

	int cases, computers, c1, c2, sucess, fail;
	string line;

	scanf("%d", &cases);
	while (cases--) {
		sucess = fail = 0;
		scanf("\n%d\n", &computers);
		UnionFind UF(computers + 1);
		char ch;
		while (true) {
			if (!getline(cin, line) || line.empty()) break;
			sscanf(line.c_str(), "%c %d %d", &ch, &c1, &c2);
			if (ch == 'c') {
				UF.unionSet(c1, c2);
			}
			else {
				UF.isSameSet(c1, c2) ? sucess++ : fail++;
			}
		}
		printf("%d,%d\n", sucess, fail);
		if (cases != 0) printf("\n");
	}
	return 0;
}