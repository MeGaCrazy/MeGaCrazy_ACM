#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main() {
	string s; int n;
	while (cin >> n, n) {
		int i = 0, dir = 0; --n;
		// x(0) -x(1) +y(2) -y(3) +z(4) -z(5)
		while (n--) {
			cin >> s;
			if (s == "+z") {
				if (dir == 0) dir = 4;
				else if (dir == 5)dir = 0;
				else if (dir == 1)dir = 5;
				else if (dir == 4)dir = 1;
			}
			if (s == "-z") {
				if (dir == 0)dir = 5;
				else if (dir == 4)dir = 0;
				else if (dir == 1)dir = 4;
				else if (dir == 5)dir = 1;
			}
			if (s == "+y") {
				if (dir == 0)dir = 2;
				else if (dir == 1)dir = 3;
				else if (dir == 3)dir = 0;
				else if (dir == 2)dir = 1;
			}
			if (s == "-y") {
				if (dir == 0)dir = 3;
				else if (dir == 1)dir = 2;
				else if (dir == 2)dir = 0;
				else if (dir == 3)dir = 1;
			}
		}
		if (dir == 0)cout << "+x" << endl;
		if (dir == 1)cout << "-x" << endl;
		if (dir == 2)cout << "+y" << endl;
		if (dir == 3)cout << "-y" << endl;
		if (dir == 4)cout << "+z" << endl;
		if (dir == 5)cout << "-z" << endl;
	}
}