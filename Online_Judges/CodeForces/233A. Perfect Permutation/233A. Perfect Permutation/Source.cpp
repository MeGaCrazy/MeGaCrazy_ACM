#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	if (n % 2 != 0) { cout << -1 << endl; return 0; }
	else
	{
		for (int i = 2,j=0; j < (n / 2);j++, i+=2)cout << i << " " << i - 1<<" ";
	    cout << endl;
	}
}