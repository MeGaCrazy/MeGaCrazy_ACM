#include <stdio.h>
#define lp(i,n) for(int i=0;i<(int)n;i++)
using namespace std;

const int N = 30;
int main() {
	int t, n, m, a;
	freopen("TextFile1.txt", "r", stdin);
	scanf("%d", &t);
	while (t--) {
		int flag = 0;
		bool am[N][N];
		scanf("%d %d", &n,&m);
		 lp(i, n) 
			lp(j, m) {
				scanf("%d", &a);
				am[i][j] = a;
			}
		 lp(i, n)
			 lp(j, m) {
			 if (am[i][j] != am[j][i]) {
				 flag = 1;
				 break;
			 }
			 if (flag)break;
		 }
		 flag?printf("No\n") :printf("Yes\n");
	}
}
