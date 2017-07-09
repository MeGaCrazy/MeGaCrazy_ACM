#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int n, k = -1, sum=0,arr[124]; string s;
	cin >> s >> n; int length = s.length();
	for (int i = 97; i <= 122; i++) {
		cin >> arr[i]; 	k = max(k, arr[i]);
	}for (int i = 0; i < (length+n); i++) {
		if (!(i >= length)) sum += (1 + i)*arr[s[i]]; else sum += k*(i + 1);
	}cout << sum << endl;
}