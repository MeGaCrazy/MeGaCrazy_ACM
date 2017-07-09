#include <iostream>
#include <string>
#include <string.h>
using namespace std;
const int N=26;
#define clr(x,y) memset(x,y,sizeof(x));
int main() {
	char s[200];
	bool adjmatrix[N];
	freopen("bla.txt","r", stdin);
	int t;
	scanf("%d", &t);
	while (t--) {
		int cnt = 0, cnt2 = 0;
		clr(adjmatrix, 0);
		while (scanf("%s", &s) && s[0] != '*') {
			if (!adjmatrix[s[1] - 'A'])cnt++;
			adjmatrix[s[1] - 'A'] = true;
			adjmatrix[s[3] - 'A'] = true;
		}
		scanf("%s", &s);
		int length = strlen(s);
		for (int i = 0; i < length; i+=2) {
			if (!adjmatrix[s[i] - 'A'])cnt2++;
		}
		printf("There are %d tree(s) and %d acorn(s).\n", cnt, cnt2);
	}
}