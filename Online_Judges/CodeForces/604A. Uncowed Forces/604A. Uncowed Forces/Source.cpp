#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t[5], hs=0,hu=0,w[5],sum = 0, po[] = { 500,1000,1500,2000,2500 };
	for (int i = 0; i < 5; i++)cin >> t[i];
	for (int i = 0; i < 5; i++)cin >> w[i];
	cin >> hs >> hu;
	for (int i = 0; i < 5; i++) {
		sum += max(po[i]/10*3, po[i]- po[i]*t[i] / 250 - 50*w[i]);
	}cout << sum + hs * 100 - hu * 50 << endl;
}