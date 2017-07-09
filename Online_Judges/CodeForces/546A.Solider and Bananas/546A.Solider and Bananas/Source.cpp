#include <iostream>
using namespace std;



int main() {
	int cost = 0;
	int k;
	int w;
	long long n;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++) {
		cost += (i*k);
	}
	if (n >= cost) {
		cout << "0" << endl;
	}
	else
	{
		cout << cost - n << endl;
	}









}