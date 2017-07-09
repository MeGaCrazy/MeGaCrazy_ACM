#include <stdio.h>
#include <stdlib.h>
#include <map>
using namespace std;
int main() {
	scanf("%*d");
	int n, m, x;
	while (scanf("%d %d", &n, &m) == 2) {
		map<int, int> r;
		while (n--)
			scanf("%d", &x), r[x]++;
		while (m--)
			scanf("%d", &x), r[x]--;
		x = 0;
		for (map<int, int>::iterator it = r.begin();
		it != r.end(); it++)
			x += abs(it->second);
		printf("%d\n", x);
	}
	return 0;
}
/*
#include <iostream>
#include <cstdio>
#include <set>

int main()
{
std :: multiset <int> mymultiset;
std :: multiset <int> :: iterator it;
int t, ans;

//freopen("input.txt", "r", stdin);
scanf("%d", &t);
while(t--)
{
int m, n;

mymultiset.clear();
scanf("%d %d", &m, &n);

// input first serise into the set;
int num; ans = 0;
for(int i = 0; i < m; i++) {
scanf("%d", &num);
mymultiset.insert(num);
}

// input second serise and cheake if it is common;
for(int i = 0; i < n; i++) {
scanf("%d", &num);

// find the num and put it it into the it ;
it = mymultiset.find(num);

// if we find the value than erase this from the set;
if(it != mymultiset.end()) {
mymultiset.erase(it);
}
else {
++ans;
}
}
printf("%d\n", mymultiset.size() + ans );
}

return 0;
}

*/