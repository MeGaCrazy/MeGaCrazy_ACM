#include <iostream>
using namespace std;


int main() {
	int count = 1;
	int a, b, n;
	cin >> a >> b >> n;
	while (n) {
		if (count % 2 != 0) {
			for (int i = a; i >= 1; i--) {
				if (n%i == 0 && a%i == 0) {
					n -= i;
					count++;
					break;
				}
			}
		}
		else
		{
			if (count % 2 == 0) {
				for (int i = b; i >= 1; i--) {
					if (n%i == 0 && b%i == 0) {
						n -= i;
						count++;
						break;	
					}
		         	}
		     	}

		}
	}
	++count;
		if (count % 2 == 0) {
			cout << "1" << endl;
		}
		else if (count % 2 != 0) {
			cout << "0" << endl;
		}

	
}