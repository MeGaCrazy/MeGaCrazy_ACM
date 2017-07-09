#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>
#include <string>
#include <map>
#define clr(x,y) memset(x,y,sizeof(x))
#define lp(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
typedef pair<int, int>ii;
typedef vector<int>vi;
typedef vector<vector<int>>vvi;
int main() {
	int n, m, a,k,v;
	vvi al;

	map<int, vi>mymap;
	//freopen("bla.txt", "r", stdin);
	while (scanf("%d%d", &n, &m) != EOF) {
		lp(i,n) {
			scanf("%d", &a);
			mymap[a].push_back(i + 1);
		}
		lp(i, m) {
			int flag = 0,flag2=0;
			scanf("%d%d", &k, &v);
			if (mymap.find(v) != mymap.end()) {
				vi  tmp = mymap[v];
				if (tmp.size() >= k) {
					printf("%d\n", tmp[k - 1]);
					flag = 1;
				}
				
			}
			if (flag == 0) {
                printf("0\n");
			}
				
		}



	}




}