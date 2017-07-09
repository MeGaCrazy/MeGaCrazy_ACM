#include <stdio.h>
#include <set>
using namespace std;
int main() {
	int n,a;
	set<int>s;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		s.insert(a);
	}
	set<int>::iterator itr;
	if (s.size() < 2)printf("NO");
	else {
		itr = s.begin();
		itr++;
		printf("%d", *itr);
	}
}