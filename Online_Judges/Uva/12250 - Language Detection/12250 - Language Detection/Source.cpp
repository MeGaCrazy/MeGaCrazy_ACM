#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char s[100]; int i = 1;
	while (scanf("%s",s)) {
		if (strcmp(s, "#")==0)return 0;
		if (strcmp(s, "HELLO")==0)cout << "Case " << i++ << ": ENGLISH" << endl;
		else if (strcmp(s, "HOLA")==0)cout << "Case " << i++ << ": SPANISH" << endl;
		else if (strcmp(s, "HALLO")==0)cout << "Case " << i++ << ": GERMAN" << endl;
		else if (strcmp(s, "BONJOUR")==0)cout << "Case " << i++ << ": FRENCH" << endl;
		else if (strcmp(s, "CIAO")==0)cout << "Case " << i++ << ": ITALIAN" << endl;
		else if (strcmp(s, "ZDRAVSTVUJTE")==0)cout << "Case " << i++ << ": RUSSIAN" << endl;
		else cout << "Case " << i++ << ": UNKNOWN" << endl;
	}
}