#include <iostream>
#include <map>
#include <string.h>
#include <string>
using namespace std;
int main() {
	int n, m, x, i = 1, a, b; char s[31]; string str;
	cin >> n >> m;
	map<string,int>mymap;
	while (n--) {
		scanf(" %s %d.%d ", &s, &a, &b);
		mymap[s] =(a*10+b);
	}
	while (m--) {
		int flag = 0 ,sum = 0;
		while (true) {
			cin >> str;
			if (str == "+")continue;
			if (mymap[str] > 0)sum += mymap[str];
			else if (str==">") {flag = 1; break;}
			else if (str == ">=") { flag = 2; break; }
			else if (str== "<") { flag = 3; break; }
			else if (str == "<=") { flag = 4; break; }
			else if (str == "=") { flag = 5; break; }
		}cin >> x;
		x *= 10;
		printf("Guess #%d was ",i++);
		if (flag == 1) {
			if (sum > x)printf("correct.\n"); else printf("incorrect.\n");
		}
		if (flag == 2) {
			if (sum >=x)printf("correct.\n"); else printf("incorrect.\n");
		}
		if (flag == 3) {
			if (sum <x)printf("correct.\n"); else printf("incorrect.\n");
		}
		if (flag == 4) {
			if (sum <=x)printf("correct.\n"); else printf("incorrect.\n");
		}
		if (flag == 5) {
			if (sum ==x)printf("correct.\n"); else printf("incorrect.\n");
		}
	}

}