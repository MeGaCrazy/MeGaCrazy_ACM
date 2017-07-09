#include <iostream>
using namespace std;
int main() {
	int a=0, b=0, c, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == 25)a++;
		if (c == 50)a--, b++;
		if (c == 100){if(b != 0) { a--, b--; } else a -= 3; }
		if (a < 0) { cout << "NO" << endl; return 0; }
	}cout << "YES" << endl;
}