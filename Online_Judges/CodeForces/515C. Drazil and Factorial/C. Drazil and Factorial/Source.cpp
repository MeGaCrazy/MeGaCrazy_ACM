#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string str,s[] = { "","","2","3","322","5","53","7","7222","7332" };
int main() {
	long long x;
	cin >> x >> x;
	while (x) { str += s[x % 10]; x /= 10; }
	sort(str.rbegin(), str.rend());
	cout << str << endl;
}