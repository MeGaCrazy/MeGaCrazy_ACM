#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <string.h>
#define fill(x,y) memset(x,y,110);
using namespace std;
int main() {
	int n,r; string s; char word[1][110];
	cin >> n;
	cin.ignore();
	n *= 2;
	fill(word, 0);
	vector<string>v1,v2;
	map<vector<string>, vector<string>>m;
	for (int t = 1; t <= n; t++) {
		getline(cin, s);
		    int length = s.length();
			for (int i = 0,j=0,o=0; i < length; i++) {
				if (i == length - 1)word[j][o++] = s[i];
				if (i == length - 1 || s[i] == ' ') {
			   		if(t%2!=0)v1.push_back(word[0]);
					else if (t % 2 == 0)v2.push_back(word[0]);
					fill(word, 0);
					j = 0, o = 0;
				}
				else word[j][o++] = s[i];
			}
			if (t % 2 == 0) {
				m[v1] = v2;
				v1.clear();v2.clear();
			}

	}
	//////////////////////////////////
	cin >> r; 
	cin.ignore();
	while (r--) {
		getline(cin, s);
		vector<string>v1,v2;
		fill(word, 0);
		int length = s.length();
		for (int i = 0, j = 0, o = 0; i < length; i++) {
			if (i == length - 1)word[j][o++] = s[i];
			if (i == length - 1 || s[i] == ' ') {
				v1.push_back(word[0]);
				fill(word, 0);
				j = 0, o = 0;
			}
			else word[j][o++] = s[i];
		}
		 v2=m[v1];
		 length = v2.size();
		for (int i = 0; i < length; i++) {
			cout << v2[i];
			if (i != length - 1)cout << " "; else cout << "\n";
		}
	}



}
////  anthor way tl3 ynf3 t7ot key string fi spaces y3ni enta 5to b getline
/*
#include<cstdio>
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
int t,n;
string in,in2;
map <string , string> out;
map <string , string> :: iterator it;
cin >> t;
getchar();
while(t--){
getline(cin , in);
getline(cin , in2);
out[in] = in2;
}
cin >> n;
getchar();
while(n--){
getline(cin , in);
it = out.begin();
while(it!=out.end()){
if(it->first==in){
cout << it->second << endl;
break;
}
else if(it->second==in){
cout << it->first << endl;
break;
}
it++;
}
}
return 0;
}




*/