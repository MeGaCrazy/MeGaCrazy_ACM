#include <iostream>
#include <deque>
//#define foreach(it,arr) for (__typeof(arr.begin()) it=arr.begin();it!=arr.end();it++)
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define ll long long
#define pb push_back
using namespace std;
int main() {
	ll p; int c, i = 1; char s;
	while (cin >> p >> c, p&&c) {
		deque<int>q;
		for (int i = 1; i <= p&&i <= 1000; i++) {q.pb(i);}
		ll x;
		printf("Case %d:\n", i++);
		while (c--) {
			cin >> s;
			if (s == 'N') {
				printf("%d\n", q.front());
				q.pb(q.front());
				q.pop_front();
			}
			else {
				cin >> x;
				for (auto it = q.begin(); it != q.end(); it++) {
					if (*it == x) { q.erase(it); break; }
				}q.push_front(x);
			}
		}
	}

}