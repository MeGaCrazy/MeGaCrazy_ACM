#include <iostream>
using namespace std;
int main() {
	int n, sum = 0, x, a,i=1;
	cin >> n;
	while (n--) {
		int juice=0,mile=0;
		cin >> x;
		cout << "Case " << i++ << ": ";
		while (x--) {
			cin >> a;
			mile += (a + 30) / 30;
			juice += (a + 60) / 60;
			}
		mile *= 10,juice *= 15;
		if (mile < juice)cout << "Mile " << mile << endl;
		else if (juice < mile)cout << "Juice " << juice << endl;
		else cout << "Mile Juice " << juice << endl;
	}
}