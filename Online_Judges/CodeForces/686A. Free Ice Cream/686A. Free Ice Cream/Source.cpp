#include <iostream>
using namespace std;
int main() {
	long long n, x,a, count = 0; char s;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> s >> a;
		s == '+' ? x += a : x - a < 0 ? count++ : x -= a;
	}cout << x << " " << count << endl;
}