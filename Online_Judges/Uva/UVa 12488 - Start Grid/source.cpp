#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int n, a[24] = { 0 }, b[24] = { 0 };
	freopen("in.txt", "r", stdin);
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);

		for (int i = 0; i < n; i++)
			scanf("%d", &b[i]);

		int ans = 0;
		for (int i = 0; i < n; i++) {
			int pos = 0;
			for (int j = 0; j < n; j++)
				if (a[j] == b[i])
					pos = j;

			for (int s = pos; s > i; s--)
				swap(a[s - 1], a[s]);

			ans += max(0, pos - i);

		}

		printf("%d\n", ans);
	}

}
