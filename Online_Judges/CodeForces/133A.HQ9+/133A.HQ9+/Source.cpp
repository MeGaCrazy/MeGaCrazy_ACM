#include <string>
#include <iostream>

using namespace std;



int main() {
	int flag = 0;
	string bla;
	cin >> bla;
	int length = bla.length();
	for (int i = 0; i < length; i++) {

	if (bla[i] == 'H' || bla[i] == 'Q' || bla[i] == '9' ) {
		cout << "YES" << endl;
		flag = 1;
		break;
	}

	}
	if (flag == 0) {
		cout << "NO" << endl;
	}
	



}