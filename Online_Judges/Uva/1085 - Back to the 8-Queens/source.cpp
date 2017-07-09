#include <stdio.h>
#include <algorithm>
using namespace std;
int col[8], path[8];
bool valid(int r, int c) {
	for (int prev = 0; prev < r; prev++) {
		if (path[prev] == c || abs(prev - r) == abs(path[prev] - c))
			return false;
	}
	return true;
}
int backtrack(int r) {
	if (r == 8)
		return 0;
	int total = 100000;
	for (int c = 0; c < 8; c++) {
		if (valid(r, c)) {
			path[r] = c;
			total = min(total,
					c == col[r] ? backtrack(r + 1) : 1 + backtrack(r + 1));
		}

	}
	return total;
}
int main() {
	int t = 1;
	freopen("in", "r", stdin);
	while (scanf("%d", &col[0]) != EOF) {
		col[0]--;
		path[0] = col[0];
		for (int i = 1; i <= 7; i++) {
			scanf("%d", &col[i]);
			col[i]--;
			path[i] = col[i];
		}
		printf("Case %d: %d\n", t++, backtrack(0));
	}
}
