#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <string.h>
#include <queue>
#include <set>
#include <map>
#define lp(i,n) for(int i=0;i<int(n);i++)
#define clr(x,y) memset(x,y,sizeof(x))
#define pb(x) push_back(x)
#define lp1(i,n) for(int i=1;i<int(n);i++)
#define all(v)    v.beign(),v.end() 
using namespace std;
typedef pair<int, int>ii;
typedef vector<ii>vii;
vector<vii>adj1, adj2;
int main() {
	int n, m, r, pos[2001], num[2001]; 
	freopen("bla.txt", "r", stdin);
	while (scanf("%d%d", &m, &n) != EOF) {
		adj1.assign(m,vii());
		adj2.assign(m, vii());
		for (int i = 0; i < m; i++) {
			scanf("%d", &r);
			
				lp(j, r) {
					scanf("%d", &pos[j]);
				}
				lp(j, r) {
					scanf("%d", &num[j]);
				}
				lp(j, r) {
					adj1[i].push_back(ii(pos[j] - 1, num[j]));
				}
			
		}
		lp(i, m) {
			lp(j, adj1[i].size()) {
				ii p = adj1[i][j];
				adj2[p.first].push_back(ii(i, p.second));
			}
		}
		printf("%d %d\n", n, m);
		lp(i, n) {
			int length = adj2[i].size();
			printf("%d", length);
			lp(j, length) {
				printf(" %d",adj2[i][j].first);
			}
			
			printf("\n");
			lp(j, length) {
				printf("%d", adj2[i][j].second);
				if (j < length - 1)printf(" ");
			}
			printf("\n");
		}
	}
}