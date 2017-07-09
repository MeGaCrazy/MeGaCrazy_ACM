#include <iostream>
#include <string>
using namespace std;
int arr[3][3];
void bla_fun() {
	int h[3][3];
	h[0][0] = (arr[0][1] + arr[1][0]) % 2; //a
	h[0][1] = (arr[0][0] + arr[1][1] + arr[0][2]) % 2; //b
	h[0][2] = (arr[0][1] + arr[1][2]) % 2; //c

	h[1][0] = (arr[0][0] + arr[1][1] + arr[2][0]) % 2; //d
	h[1][1] = (arr[0][1] + arr[1][0] + arr[1][2] + arr[2][1]) % 2; //e
	h[1][2] = (arr[1][1] + arr[0][2] + arr[2][2]) % 2; //f

	h[2][0] = (arr[2][1] + arr[1][0]) % 2; //g
	h[2][1] = (arr[2][0] + arr[1][1] + arr[2][2]) % 2; //h
	h[2][2] = (arr[2][1] + arr[1][2]) % 2; //i

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = h[i][j];
		}
	}
}



bool is_zero() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j]>0)return false;
		}
	}
	return true;
}



int main() {
	int t; string s;
	cin >> t;
	while (t--) {
		int ans = -1;
		for (int i = 0; i < 3; i++) {
			cin >> s;
			for (int j = 0; j < 3; j++) { arr[i][j] = (int)(s[j] - '0'); }
		}
		while (!is_zero()) {
			bla_fun();
			ans++;
		}
		cout << ans << endl;


	}

}