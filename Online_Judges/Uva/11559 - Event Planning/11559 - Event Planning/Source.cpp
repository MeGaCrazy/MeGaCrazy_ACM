#include <iostream>
#include <cstdio>
#define GRANDE 500005
using namespace std;

int main() {
	long n, b, h, w;
	while (scanf("%ld %ld %ld %ld", &n, &b, &h, &w) != EOF) {
		long p, a, total = GRANDE;
		for (int i = 0; i<h; i++) {
			scanf("%d", &p);
			for (int j = 0; j < w; ++j)
			{
				scanf("%d", &a);
				if (a >= n) {
					long preTotal = n*p;
					if (preTotal <= b && preTotal<total)
						total = preTotal;
				}
			}
		}
		(total == GRANDE) ? printf("stay home\n") : printf("%d\n", total);
	}
	return 0;
}