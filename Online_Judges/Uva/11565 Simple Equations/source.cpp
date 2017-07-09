#include <stdio.h>
using namespace std;
void bla(int a, int b, int c) {
	for (int x =-22; x <=22; x++)
		if (x * x <= c)
			for (int y = -100; y <= 100; y++)
				if (x!=y&&y * y + x * x <= c)
					for (int z = -100; z <= 100; z++)
						if (z!=x&&y!=z&&x + y + z == a && x * y * z == b
								&& x * x + y * y + z * z == c)
							{printf("%d %d %d\n", x, y, z);return;}
                                                          

	printf("No solution.\n");

}
int main() {
	int n, a, b, c;
        freopen("in.txt","r",stdin);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		bla(a, b, c);
	}
}
