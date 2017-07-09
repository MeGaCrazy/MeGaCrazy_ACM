#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	if (n == 1 || n==2)cout<<1<<endl << 1 << endl;
	else if (n == 3)cout<<2<<endl<< 1 << " " << 3 << endl;
	else
	{
		cout << n << endl;
		for (int i = n-1; i >= 1; i -= 2) {cout << i << " ";}
		for (int j = n; j >= 1; j -= 2) { cout << j << " "; }
	}
}