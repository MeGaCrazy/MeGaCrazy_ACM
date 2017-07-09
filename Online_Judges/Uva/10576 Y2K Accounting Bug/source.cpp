#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int sur, dict;
        freopen("in","r",stdin);
	while (scanf("%d %d", &sur, &dict) != EOF) {
		int ans = -1;
		for (int mask = 0; mask < (1 << 12); mask++) {
			int total = 0;
			bool flag = true;
			for (int i = 0; i < 12; i++) {
				if (mask & (1 << i))
					total += sur;
				else
					total -= dict;
				if (i + 5 <= 12) {
					int group = 0;
					for (int j = i; j < (i + 5); j++) {
						if (mask & (1 << j))
							group += sur;
						else
							group -= dict;
					}
					if (group >= 0)
						flag = false;
				}
			}
                       if(flag)ans = max(total, ans);
		}
		ans == -1 ? printf("Deficit\n") : printf("%d\n", ans);
	}

}
