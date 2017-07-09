#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, t;
	string s[] = { "you","Happy","birthday","to" }; string s2[101];
	cin >> n;
	int count = ((n + 15) / 16)*16;
	for (int i = 1; i <= n; i++)cin >> s2[i];
	for (int i = 1; i <=count; i++) {
	      t = i%n;
	      if (!t)t = n;
	      if (i % 12 != 0)cout << s2[t] << ": " << s[i % 4] << endl;else cout << s2[t] << ": " << "Rujia"<< endl;
	}
}
/*
int main(){
string name[110],song[] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
int n;
cin >> n;
for(int i = 0; i < n; i++){
cin >> name[i];
}
int j = 0,k = 0,m = 1;
if(n > 16)m = ceil(n/16)+1;
for(int i = 0; i < m*16; i++,j++,k++){
if(k == 16)k = 0;
if(j == n)j = 0;
cout << name[j] << ": " << song[k] << endl;
}
return 0;
}

*/