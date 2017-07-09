#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
using namespace std;
int main() {
	int n, sum = 0, i = 0;
	string s1, s2;
	cin >> n >> s1 >> s2;
	while (n) {
		int	temp1 = s1[i] % 10-'0', temp2 = s2[i] % 10-'0';
		sum+=min(abs(temp1 - temp2), min((9 - temp1 + (temp2 + 1)), (9 - temp2) + temp1 + 1));
		i++, n--;
	}
	cout << sum << endl;
}