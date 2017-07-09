#include <iostream>
using namespace std;
int main() {
	int count = 0;;
	int temp = 0;
	long long n;
	cin >> n;
	while (n) {
		temp = n % 10;
		if (temp == 7 || temp == 4) {
			count++;
		}
		n = n / 10;
	}
 if (count == 7 || count == 4) {
		cout << "YES" << endl;
 }
 else
 {
	 cout << "NO" << endl;
 }

}