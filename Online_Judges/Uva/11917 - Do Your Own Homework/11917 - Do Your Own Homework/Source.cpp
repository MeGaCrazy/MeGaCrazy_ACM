#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	int t, n, a,d,c=1; string s;
	cin >> t;
	while (t--) {
		map<string, int>m;
		cin >> n;
		while (n--) {
			cin >> s >> a;
			m[s] = a;
		}cin >> d >> s;
		printf("Case %d: ", c++);
		if (!m[s] || m[s] > (d + 5))printf("Do your own homework!\n");
		else if (m[s] <= d)printf("Yesss\n");
		else if (m[s] <= (d + 5))printf("Late\n");
	}
}