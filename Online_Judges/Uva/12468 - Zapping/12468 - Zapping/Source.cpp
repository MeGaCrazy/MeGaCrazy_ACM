#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == -1 && b==-1) return 0;
		else
		{
			cout << min(abs(b-a), a+(100-b)) << endl;
		}
	}
}