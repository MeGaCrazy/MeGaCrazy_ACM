#include <iostream>
using namespace std;
int main() {
	int n, a, b, mish = 0, chri = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a > b)mish++;
		else if (b > a)chri++;
		else continue;
	}
	mish > chri ? cout <<"Mishka"<< endl: mish == chri ?cout <<"Friendship is magic!^^"<< endl:cout <<"Chris"<< endl;
}