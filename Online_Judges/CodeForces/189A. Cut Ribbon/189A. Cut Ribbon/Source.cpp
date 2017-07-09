#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	// unsolved
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int best = min(max(max(n / a, n / (a + b + c)), max(n / b, n / c)), max(n / (a + b), max(n / (a + c), n / (b + c))));
	cout << best << endl;

}
	