#include <iostream>
using namespace std;
int main() {
	int arr[200], a, b, sum = 0;char bla;
	arr['C'] = 200, arr['M'] = 200, arr['Y'] = 200, arr['W'] = -1, arr['G'] = -1, arr['B'] = -1;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> bla;
			sum += arr[bla];
		}
	}sum > 0 ? cout << "#Color" << endl : cout << "#Black&White" << endl;



}