#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		if (i%b == 0)++a;
	}
	cout << a << endl;
}