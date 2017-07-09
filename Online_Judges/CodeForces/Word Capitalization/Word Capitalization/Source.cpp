#include <string>
#include <iostream>
using namespace std;




int main() {
	string bla;
	int length = bla.length();
	getline(cin, bla);
	if (bla[0] > 96) {
		bla[0] -= 32;
	}
	cout << bla << endl;



}