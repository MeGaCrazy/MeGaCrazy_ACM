#include <iostream>
#include <string>
using namespace std;
int main() {
	// unsolved fuckin stupid code 
	string s1, s2;int  count1 = 0, count2 = 0;
	cin >> s1 >> s2; int length = s1.length();
	if (s2.find("?") >= 0 && s2.find("?")<length) {
		for (int i = 0; i < length; i++) {
;
			if (s2[i] != '?' && s1.find(s2[i]) < 0 || s1.find(s2[i])>=length) {printf("%.12f\n", 0.0); return 0;}
		}printf("%.12f\n", .5);
	}
	else {
		for (int i = 0; i < length; i++) {
			count1 += (s1[i] - '0'); count2 += (s2[i] - '0');
		}count1 == count2 ? printf("%.12f\n", 1.0) : printf("%.12f\n", 0);
	}

}