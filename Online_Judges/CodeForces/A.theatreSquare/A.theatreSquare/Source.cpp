#include <iostream>
using namespace std;
int main() {
	int n, m, a;
	cin >> n >> m >> a;
	cout << ((n + a - 1) / a)*((m + a - 1) / a) << endl;
}