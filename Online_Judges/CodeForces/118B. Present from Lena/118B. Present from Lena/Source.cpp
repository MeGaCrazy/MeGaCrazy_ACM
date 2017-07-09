#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;         
	n = ((n * 2) + 1);     // to solve the problem of spaces use the space if not the chossen number like number don't be confused and the last space in for loop to space between any output between spaces and spaces and spaces and number and so on
	for (int i = 0; i < n; i++, cout << endl) {
		int count = -1;
		for (int j = 0; j < n; j++) {
			if (abs(i - n / 2) + abs(j - n / 2) <= n / 2) {
				if (j <= n / 2)cout << ++count; else  cout << --count;
			}else if(j<=n/2) cout <<" "; // this for space in the first
			if (j >= n / 2 && count == 0);
			else cout <<" ";// this for solu the space between each numbers 
		}
	}
}