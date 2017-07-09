#include <iostream>
using namespace std;
int main() {
	double h, u, d, f, height;
	while (cin >> h >> u >> d >> f, h) {
		height = 0.0; f = u*(f / 100); int i = 1;
		while (i) {
			height += u;
			if (height > h) {
				cout << "success on day " << i << endl;
				break;
			}
			height -= d;
			if (height < 0) {
				cout << "failure on day " << i << endl;
				break;
			}
			u = u - f>0 ? u - f : 0;
			i++;
		}
	}
}