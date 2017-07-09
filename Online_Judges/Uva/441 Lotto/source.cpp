#include <stdio.h>
using namespace std;
int main() {
	int k, arr[14] = { 0 };
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	scanf("%d", &k);
	while (k > 0) {
		for (int i = 0; i < k; i++)
			scanf("%d", &arr[i]);

		for (int i = 0; i < k - 5; i++)
			for (int j = i + 1; j < k - 4; j++)
				for (int s = j + 1; s < k - 3; s++)
					for (int w = s + 1; w < k - 2; w++)
						for (int y = w + 1; y < k - 1; y++)
							for (int z = y + 1; z < k; z++)
								printf("%d %d %d %d %d %d\n", arr[i], arr[j],
										arr[s], arr[w], arr[y], arr[z]);
		scanf("%d", &k);
		if (k != 0)
			printf("\n");
	}

}
