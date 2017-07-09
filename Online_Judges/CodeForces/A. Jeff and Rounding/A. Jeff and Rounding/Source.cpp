#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	double ans = 0.0, a;
	int sumron = 0;

	for (int i = 0; i < 2*n; i++) {
		scanf("%lf", &a);
		ans += a;
		if (a - .500 == (int)a)
			sumron += a;
		else {
			sumron += round(a);
		}
	}

	int ab = 1;
	if ((ans - (double)sumron) < 0)ab= -1;
	printf("%.3f",(ans - (double)sumron)*ab);
}