#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
int main() {
	string s = { "01230120022455012623010202" }; char w[50];
	while (scanf("%s",w)==1) {
		int x = strlen(w); int last = -1;
		for (int i = 0; i <x ; i++) {
			if (s[w[i] - 'A'] != '0') {
				if (s[w[i] - 'A'] != last) {
					last = s[w[i] - 'A'];
					printf("%c", s[w[i] - 'A']);
				}
			}
			else
				last = -1;
		}puts("");
	}
}