#include <string>
#include <iostream>
using namespace std;

int main() {
	string s; int countupp = 0, countlow = 0;
	cin >> s; int length = s.length();
	for (int i = 0; i < length; i++) {
		if (islower(s[i])) {countlow++;	}else {countupp++;  
		s[i] += 32;
		}
	}
	for (int i = 0; i < length; i++) {
		if (countupp > countlow) {s[i] -= 32;}
	     }cout << s << endl;
}
