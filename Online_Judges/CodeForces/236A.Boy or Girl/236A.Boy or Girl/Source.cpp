#include <Iostream>
#include <string>
using namespace std;


int main() {
	int count = 0;
	string s;
	cin >> s;
	int length = s.length();
	for (int i = 0; i <length ; i++) {
		count++;
		for (int j = 0; j < i; j++) {
		if (s[i] == s[j]) {
			--count;
			break;
		}
		}
		
		
	}
	if (count % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	}
	else
	{
		cout << "IGNORE HIM!" << endl;
	}



}