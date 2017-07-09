#include <iostream>
#include <set>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#define fill(x,y) memset(x,y,sizeof(x));
using namespace std;
int main() {
	int c, r, n,i=1;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &c, &r);
		printf("Case #%d:", i++);
		int num = c - r;
		if (num == 0) {printf(" 0\n"); continue;}
		set <int >s;
		for (int i = 1; i*i <=num; i++) {
			if (num%i == 0) {
				s.insert(i); s.insert(num / i);
			}
		}
		for (auto i = s.begin(); i != s.end(); i++) {
			if (*i > r)printf(" %d", *i);
		}
		printf("\n");
	}
}