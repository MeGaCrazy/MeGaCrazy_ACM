#include <string>
#include <iostream>
using namespace std;


int main() {
	string word[2];
	int length;
	for (int i = 0; i < 2; i++) {
		cin >> word[i];
		 length = word[i].length();
		for (int j = 0; j< length; j++) {
			if (isupper(word[i][j])) {
				word[i][j]=word[i][j] + 32;
			}
		}
	}
	
	if (word[0] > word[1]) {
		cout << 1 << endl;
	}
	else if (word[0] == word[1]) {
		cout << 0 << endl;
	}
	else
	{
		cout << -1 << endl;
	}


}