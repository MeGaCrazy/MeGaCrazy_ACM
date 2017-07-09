#include <stdio.h>
#include <algorithm>
using namespace std;
const int N = 500;
int n, m, arr[N][N];
int main() {
          freopen("in.txt","r",stdin);
	while (scanf("%d %d", &n, &m), n, m) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				scanf("%d", &arr[i][j]);
		}
		int l, u, q;
		scanf("%d", &q);
		while (q--) {
			int maxdig = 0;
			scanf("%d %d", &l, &u);
			for (int i = 0; i < n; i++) {
				int*low = lower_bound(arr[i], arr[i] + m, l);
				int index = low - arr[i];
				for (int j = maxdig; j < n; j++) {
					if (j + i >= n || j + index >= m
							|| arr[i + j][j + index] > u)
						break;
					if (j + 1 > maxdig)
						maxdig = j + 1;
				}
			}
			printf("%d\n", maxdig);
		}

		printf("-\n");
           
	}

}
