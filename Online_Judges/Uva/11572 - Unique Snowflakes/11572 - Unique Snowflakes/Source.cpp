#include <stdio.h>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int main() {
	int t, n,a;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		map<int, int>m;
		vector<int>v;
		vector<int>::iterator itr;
		int cnt=0,maxn = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a);
			maxn = max(maxn, cnt);
		   if(m[a]) {
			   while (true) {
				   itr = v.begin();
				   if (*itr != a) {
					   m.erase(*itr);
					   v.erase(itr);
					   cnt--;
				   }
				   else if (*itr == a) {
					   v.erase(itr);
					   v.push_back(a);
					   break;
				   }
			   }
		  }else {
			   m[a]++;
			   v.push_back(a);
			   cnt++;
		       }
		   maxn = max(maxn, cnt);
		}
		printf("%d\n", maxn);
	}
}