#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
            // unsolved fuck fuck fuck
	for (int p1 = 1; p1 <= 2000; p1++) {
		
		long long s = p1*p1*p1*p1;
			if (s>2 * pow(10, 9))break;
		for (int p2 = p1; p2 <= 2000 - p1; p2++) {
			s = p1*p2*p2*p2;
			if (s> 2 * pow(10, 9))break;
			for (int p3 = p2; p3 <= 2000 - (p1 + p2); p3++) {
				s = p1*p2*p3*p3;
				if (s> 2 * pow(10, 9))break;
				int c = 1000000;
				int a = p1 + p2 + p3;
				long long  b = p1*p2*p3;
				long long  d = 1ll * c*a;
				long long  e = b - c;
				if (d%e>0)continue;
				int p4 = int(d / e);
				if (p3 > p4 || p4 + a > 2000 || 1ll * b*p4 > 2 * pow(10, 9))continue;

				printf("%d/%d %d/%d %d/%d %d/%d\n", p1 / 100, p1 % 100, p2 / 100, p2 % 100, p3 / 100, p3 % 100, p4 / 100, p4 % 100);


			}
		}
	}

}