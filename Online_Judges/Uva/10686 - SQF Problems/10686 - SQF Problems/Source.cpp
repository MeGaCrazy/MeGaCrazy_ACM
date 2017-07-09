#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#define fill(x,y) memset(x,y,101);
using namespace std;
int main() {
	int t, n, w, p; string s, catog,tmp;
	cin >> t;
	while (t--) {
		map<string, string>nodes;
		map<string, int>parent;
		map<string, int>cnt;
		vector<string>catgorys;
		map<string, int>nodescnt;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> catog >> w >> p;
			cnt[catog] = p;
			catgorys.push_back(catog);
			parent[catog] = 0;
			for (int i = 0; i < w; i++) {
				cin >> s;
				nodes[s] = catog;
				nodescnt[s] = 0;
			}
		}
		/////////////////////////////////////////////////////////
		cin.ignore();
		while (getline(cin, s) && s != "\0") {
			int length = s.length(); char word[1][101];
			fill(word, 0);
			for (int i = 0, j = 0, o = 0; i < length; i++) {
				if (i == length - 1)word[j][o++] = s[i];
				if (s[i] == ' ' || i == length - 1) {
					tmp = word[0];
				if (tmp[tmp.size() - 1] == '.')tmp.erase(tmp.size()- 1);
					if (nodes.find(tmp) != nodes.end()) {
						if (!nodescnt[tmp]++) {
							parent[nodes[tmp]]++;
						}
					}
					fill(word, 0);
					j = 0, o = 0;
				}
				else { word[j][o++] = s[i]; }
			}
		}
		//////////////////////////////////////////////////////////
		int flag = 0;
		for (int i = 0; i < n; i++) {
			//if (parent.find(catgorys[i]) == parent.end())continue;
			if (parent[catgorys[i]] >= cnt[catgorys[i]]) {
				if (flag!= 0)cout << ",";
				cout << catgorys[i];
				flag++;
			}
		}
		if (flag == 0)printf("SQF Problem.");
		cout << endl;
	}

}
/*
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#define fill(x,y) memset(x,y,110);
#define forr(i,a,b) for(int i=a;i<=b;i++);
using namespace std;
int main() {
ios::sync_with_stdio(false);
int t, n,w,m; string s;
cin >> t >> n;
while (t--) {
vector<vector<string>>v(11); // for saving the catogrys childern
vector<string>catgory;   // for get the category like input
map<string, int>cnt; // for get m for all the catgoey like it appear in input
map<string, int>spices;  // for get if every one is show up
int catg = 0;
/////////////////////////////////////////////////////////////////////
while (n--) {
cin >> s >> w >> m;
catgory.push_back(s);
cnt[s]=m;
for (int i = 0; i < w; i++) {
cin>>s;
v[catg].push_back(s);
spices[s] = 1;
}catg++;
}
/////////////////////////////////////////////////////////////////////
cin.ignore();
while (getline(cin, s) && s[0] != '\0') {
int length = s.length(); char word[1][101] = { "" };
for (int i = 0,j=0,o=0; i < length;i++) {
if (i == length - 1)word[j][o++] = s[i];
if (s[i] == ' ' || i==length-1) {
if (spices[word[j]] > 0)spices[word[j]]++;
memset(word, 0, 101);
j=0, o = 0;
}else{word[j][o++] = s[i];}
}
}
//////////////////////////////////////////////////////////////////
int biglength = catgory.size(), flag = 0;
for (int i = 0; i < biglength; i++) {
int count = 0, length = v[i].size();
for (int j = 0; j < length; j++) {
if (spices[v[i][j]]>1)count++;
}
if (count >= (cnt[catgory[i]] - 1)) {
cout << catgory[i] << endl;
flag = 1;
}

}if (flag == 0)cout<<"SQF Problem."<< endl;
}

}
*/