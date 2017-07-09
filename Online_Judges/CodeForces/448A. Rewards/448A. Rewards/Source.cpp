#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int cup[3], medal[3], n, sumCup = 0, sumMed = 0;
	for (int i = 0; i < 3; i++) {
		cin >> cup[i];sumCup += cup[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> medal[i];sumMed += medal[i];
	}cin >> n;
		if (sumCup > 5) {n = n - ceil((double)sumCup / 5);}else if (sumCup>0&&sumCup <= 5) n--;
		if (sumMed > 10) {n = n - ceil((double)sumMed / 10);}else if (sumMed>0&&sumMed <= 10)n--;
		if (n >= 0) {cout << "YES" << endl;}
		else{cout << "NO" << endl;}
}