#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
const int N =1005;
int dp[N][N];
int main() {
	int n, m, t = 0;
	freopen("in.txt", "r", stdin);
	while (scanf("%d %d", &n, &m) != EOF) {
		/////// get input //////////
		if (t++>0) { printf("\n"); }
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i<n; i++) {
			for (int j = 0; j<n; j++) {
				scanf("%d", &dp[i][j]);
			}
		}
		////// cumulate ///////
		for (int i = 0; i<n; i++) {
			for (int j = 0; j<n; j++) {
				if (i>0)dp[i][j] += dp[i - 1][j];
				if (j>0)dp[i][j] += dp[i][j - 1];
				if (i>0 && j>0)dp[i][j] -= dp[i - 1][j - 1];
			}
		}
		/////// get submatrix ////////
		 int sum = 0;
	         for(int i=0,k=n-m+1;i<k;i++){
	             for(int j=0;j<k;j++){
                        int x=i+m-1,y=j+m-1;
                        int ans=dp[x][y];
                        if (i>0)ans -= dp[i - 1][y];
			if (j>0)ans -= dp[x][j - 1];
			if (i>0 && j>0)ans+= dp[i - 1][j - 1];
			 printf("%d\n",ans);
                        sum+=ans;
                      }
                   }				
			printf("%d\n", sum);
	}
}