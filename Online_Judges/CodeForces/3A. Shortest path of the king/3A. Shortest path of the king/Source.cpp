#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int temp = max(abs((s1[1] - '0') - (s2[1] - '0')), abs((s1[0] - '0') - (s2[0] - '0')));
	int col = abs((s1[1] - '0') - (s2[1] - '0')), r = abs((s1[0] - '0') - (s2[0] - '0'));
	cout << temp << endl;
	for (int i = 0; i < temp; i++, cout << endl) {
		if ((s1[0] - '0') < (s2[0] - '0')&&(r--)>0)cout << "R";
		else if ((s1[0] - '0') > (s2[0] - '0')&&(r--)>0)cout << "L";
		if ((s1[1] - '0') >(s2[1] - '0')&&(col--)>0)cout << "D";
		else if ((s1[1] - '0') < (s2[1] - '0') && (col--)>0)cout << "U";
	}

}