#include <iostream>
using namespace std;
int main() {
	int hr[51] = { 0 }, ver[51] = { 0 }, n, arr[50] = {0}, j = 0,a,b;
	cin >> n;
	for (int i = 0; i < n*n; i++) {
		cin >> a >> b;
		if (hr[a] == 0 && ver[b] == 0) {
			arr[j] = i + 1;
			hr[a]++; ver[b]++;
			j++;}
	}
	for (int i = 0; i < j; i++) {
		cout << arr[i] <<" ";
	}cout << endl;

}