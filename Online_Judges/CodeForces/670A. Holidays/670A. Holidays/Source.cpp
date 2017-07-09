#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n < 7)cout << (n==6)*1 << " " << (n>=2?2:1) << endl;
	else cout << (n/7)*2+(n%7==6) << " " << (n / 7) * 2+(n%7>=2?2:n%7) << endl;
}