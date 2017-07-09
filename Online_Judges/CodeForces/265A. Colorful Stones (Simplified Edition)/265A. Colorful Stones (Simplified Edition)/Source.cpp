#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
	char s[51] = { 0 }, s2[51] = { 0 };
	scanf(" %s %s", &s, &s2);
	int pos = 1; int length = strlen(s2), length2 = strlen(s);
	for (int i = 0,j=0; i < length; i++) {
		if (j<length2&&s2[i] == s[j])
			pos++,j++;
	}printf("%d", pos);
}