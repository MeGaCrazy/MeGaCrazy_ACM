#include <stdio.h>
#include <string.h>
using namespace std;
const int N = 104;
char arr[N];
int main() {
	freopen("in", "r", stdin);
	int t, cas = 1;
	scanf("%d", &t);
	while (t--) {
		int n, cnt = 0;
		memset(arr, '#', sizeof(arr));
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf(" %c", &arr[i]);

		for (int i = 0; i < n; i++) {
			if (arr[i] = '.') {
				arr[i] = arr[i + 1] = arr[i + 2] = '#';
				cnt++;
			}
		}
		printf("Case %d: %d\n", cas++, cnt);
	}

}
