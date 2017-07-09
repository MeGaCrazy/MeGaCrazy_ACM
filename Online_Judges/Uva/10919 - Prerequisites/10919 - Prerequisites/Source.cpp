#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	string s, d; int k, m, a, flag, b;
	while (cin >> k, k>0) {
		map<string, int>w;
		cin >> m;
		flag = 0;
		for (int i = 0; i < k; i++) { cin >> d; ++w[d]; }
		while (m--) {
			cin >> a >> b;
			while (a--) {
				cin >> d;
				if (w[d])b--;
			}if (b > 0)flag = 1;
		}flag == 0 ? cout << "yes" << endl : cout << "no" << endl;
	}
}