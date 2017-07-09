#include <iostream>
using namespace std;
int main() {
	int n, x, up = 0, down = 0, i=0,a,t;
	cin >> n;
	while (n--)
	{    
		up = 0, down = 0;
		cin >> x >> a; --x;
		while (x--) {
			cin >> t;
			if (t > a)up++; else if (t < a)down++;
			a = t;
		}cout << "Case " << ++i << ": " << up << " " << down << endl;
	}
}