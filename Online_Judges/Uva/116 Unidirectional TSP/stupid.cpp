#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <vector>                                  
#include <time.h>
#include <string>
using namespace std;
typedef vector<int>vi;
string ansS;
int m, n, memo[11][101], ansv = 999999, a, b, c, arr[11][101];
int solve(int row, int col, string s, int value) {
	if (col >= n) {
		if (ansv>value) {
			ansv = value;
			ansS = s;
		}
		return 0;
	}
	if (row >= m * 2 || row<0)
		return  9999999;
	if (memo[row][col] != -1)
		return memo[row][col];
	int ans = 999999999;
	int  c = arr[row][col] + solve(row, col + 1, s + to_string(row+'0'), value + arr[row][col]);
	int  a = arr[row][col] + solve(row + 1, col + 1, s+to_string(row+'0'), value + arr[row][col]);
	int  b = arr[row][col] + solve(row - 1, col + 1, s + to_string(row+'0'), value + arr[row][col]);
	ans = min(ans, min(a, min(c, b)));
	return memo[row][col] = ans;
}
int main() {
	freopen("in.txt", "r", stdin);
	while (scanf("%d %d", &m, &n) != EOF) {
		for (int i = 0; i<m; i++) {
			for (int j = 0; j<n; j++) {
				scanf("%d", &arr[i][j]);
			}
		}
		for (int i = m; i<2 * m; i++) {
			for (int j = 0; j<n; j++) {
				arr[i][j] = arr[i - m][j];
			}
		}
		memset(memo, -1, sizeof(memo));
		int ans = 9999999;
		ansS.clear();
		for (int i = 0; i<2 * m; i++) {
			ans = min(ans, solve(i, 0, "", 0));
		}
		
		printf("%d\n", ans);
		int sz = ansS.length();
		sort(ansS.begin(), ansS.end());
		for (int i = 0; i<sz; i++) {
			printf(i == sz - 1 ? "%d\n" : "%d  ", (ansS[i] - '0') + 1);
		}
		//    fflush(stdout);
		//     fprintf(stderr,"Case solved in time =%d ms\n",(int)clock());

	}
}