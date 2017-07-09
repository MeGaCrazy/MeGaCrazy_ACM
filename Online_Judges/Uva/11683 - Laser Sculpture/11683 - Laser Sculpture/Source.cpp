#include <iostream>
using namespace std;
int main() {
	int height, length, current=0,v[100001] = {0}, sum = 0;
	while (cin >> height,height>0) {
		cin >> length;
		sum = 0, current = 0;
		for (int i = 0; i < length; i++) {
			cin >> v[i];
			if (i == 0) {
				sum += height - v[i];
			}
			else if (v[i] < current) {
				sum += (current - v[i]);
			}
			current = v[i];
		}cout << sum << endl;
	}
}