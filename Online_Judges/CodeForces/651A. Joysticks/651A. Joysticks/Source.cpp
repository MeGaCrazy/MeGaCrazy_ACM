#include <iostream>
using namespace std;
int main() {
	int a, b, count = 0;
	cin >> a >> b;
		while (a > 0 && b > 0) {
			if (a == b && (a - 2) < 0 && count == 0)break;
			if (a >= b) { a -= 2; b++; count++; }
			else if (b > a) { b -= 2; a++; count++; }	
	}cout << count << endl;
}
