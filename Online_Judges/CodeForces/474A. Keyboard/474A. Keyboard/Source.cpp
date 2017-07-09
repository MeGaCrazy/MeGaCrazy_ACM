#include <iostream>
#include <string>
using namespace std;
int main() {
	int corre;char s;
	string s1,s2 = {"qwertyuiopasdfghjkl;zxcvbnm,./"};
	cin >> s >> s1; if (s == 'R')corre = -1; else corre = 1;
	int length1= s1.length();int length2 = s2.length();
	for (int i = 0; i < length1; i++) {
		for (int j = 0; j < length2; j++) {
				if (s1[i] == s2[j]) {
					s1[i] = s2[j + corre];
					break;}
			}
	}cout << s1 << endl;
	/*   anthor tricky solu
	string s={"qwertyuiopasdfghjkl;zxcvbnm,./"},a,b;
	cin>>a>>b;
	for(int i=0;i<b.size();i++){
	   cout<<s[s.find(b[i])-(a=='R')+(a=='L')];
	};
	*/




}