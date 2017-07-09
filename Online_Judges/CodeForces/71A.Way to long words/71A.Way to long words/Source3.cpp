#include <iostream>
#include <string>
using namespace std;



int main() {
	int n;
	string s[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		int length = s[i].length();
		if (length > 10) {
			cout << s[i][0];
			cout << (length - 2);
		    cout<<s[i][length - 1]<< endl;
		}
		else
		{
			cout << s[i] << endl;
		}
	}










}