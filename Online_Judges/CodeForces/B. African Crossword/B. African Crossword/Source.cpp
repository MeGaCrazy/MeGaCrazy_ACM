#include <stdio.h>
using namespace std;
int main(){
	char arr[201][201] = { 0 };
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int r = 0;
			int c = 0; bool ans = false;
			while (r < n) {
				if (r == i) {
					r++; continue;
				}

				if (arr[r][j] == arr[i][j]) { ans = true; break; }
				r++;
			}
			if (!ans) {
				while (c < m) {
					if (c == j) {
						c++; continue;
					}
					if (arr[i][c] == arr[i][j]) { ans = true; break; }
					c++;
				}
			}
			if (!ans)printf("%c", arr[i][j]);
		}
	}
}