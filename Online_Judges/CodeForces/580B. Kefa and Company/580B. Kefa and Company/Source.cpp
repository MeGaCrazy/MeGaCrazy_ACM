#include <iostream>
#include <algorithm>
#define f first
#define s second
using namespace std;
int main() {
	long long n, d, best=-1,x = 0, sum=0;
	pair<int, int>m[100001];
	cin >> n >> d;
	for (int i = 0; i < n; i++)cin >> m[i].f >> m[i].s; 
     sort(m, m + n);
	for (int i = 0,j=0;i < n; i++) {
		sum += m[i].s;
		while ((m[i].first - m[j].first) >= d)sum -= m[j++].s;
		best = max(best,sum);
	}cout << best << endl;
}