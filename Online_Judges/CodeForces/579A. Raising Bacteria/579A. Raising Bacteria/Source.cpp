#include <iostream>
using namespace std;
int main() {
	int x, s = 0;
	cin >> x;
	while (x) { s += x % 2; x /= 2; }cout << s << endl;
}