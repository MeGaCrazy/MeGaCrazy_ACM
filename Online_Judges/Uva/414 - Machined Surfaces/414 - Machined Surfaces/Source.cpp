#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int n; string s;
	while (cin>>n, n) {
		int arr[14] = { 0 }, t = -1, sum = 0;
		cin.ignore();
		for (int i = 0; i < n; i++) {
			 getline(cin, s);
			for (int j = 0; j < s.length(); j++) {
				if (s[j] == 'X')arr[i]++;
				t = max(arr[i], t);
			}
		}
		for (int i = 0; i < n; i++) {
			sum += (t - arr[i]);
		}
		cout << sum << endl;
	}

}