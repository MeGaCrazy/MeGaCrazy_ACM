#include <iostream>
using namespace std;

int main() {
	int n, a, count = 0;
	cin >> n;cin >> a;
	int leassst =a, besttt = a;--n;
	while (n--)
	{     cin >> a;
		if (a > besttt) {
			besttt = a;
			count++;
		}
		else if (a < leassst) {
			leassst = a;
			count++;
		}
	}cout << count << endl;



}