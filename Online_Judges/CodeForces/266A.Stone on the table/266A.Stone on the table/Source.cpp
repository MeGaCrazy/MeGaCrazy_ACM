#include <iostream>
#include <string>
using namespace std;



int main() {
	int count = 0;
	char s[50];
	int number;
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < number-1; i++) {
		if (s[i] == s[i + 1]) {
			count++;
		}
	}
	cout << count << endl;







}