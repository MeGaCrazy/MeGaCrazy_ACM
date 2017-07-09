#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a,temp, b;long long s;
	cin >> a >> b >> s;
	 temp = s - (abs(a) + abs(b));
	if (temp < 0) { cout << "NO" << endl; }
	else{temp % 2 == 0 ? cout << "YES" : cout << "NO" << endl;}
}