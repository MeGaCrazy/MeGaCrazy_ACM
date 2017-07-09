#include <iostream>
using namespace std;
int main() {
	int a, b, k, m,d,x1,x2;
	cin >> a >> b >> k >> m;
	for (int i = 1; i <= a; i++) { cin >> d; if (i == k)x1 = d; }
	for (int i = b; i >= 1; i--) {cin >> d;if (i == m)x2 = d;}
	x2 > x1 ? cout << "YES" << endl : cout << "NO" << endl;
}
/*  anthor solu

int na,nb,k,m,a[111111],b[111111];
int main()
{
cin>>na>>nb>>k>>m;
for(int i=1;i<=na;++i)cin>>a[i];
for(int i=1;i<=nb;++i)cin>>b[i];
puts(a[k]<b[nb-m+1]?"YES":"NO");
}

*/
