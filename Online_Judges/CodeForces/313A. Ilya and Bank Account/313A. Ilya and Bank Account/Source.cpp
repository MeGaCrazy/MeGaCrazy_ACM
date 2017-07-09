#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long a;cin >> a; if (a > 0)cout << a << endl; else cout <<max( a/ 10, ((a / 100)*10) +(a % 10)) << endl;
}