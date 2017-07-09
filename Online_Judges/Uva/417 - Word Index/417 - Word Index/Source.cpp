#include <iostream>
#include <map>
#include <queue>
#include <string>
using namespace std;
queue<string>q;
map<string,int>m;
void genereate_pro() {
	queue<string>q;
	for (char c = 'a'; c <= 'z'; c++)q.push(string(1,c));
	int cnt = 1;
	string s;
	while (!q.empty()) {
		s = q.front();
		q.pop();
		m[s] = cnt;
		cnt++;
		if (s.size() == 5)continue;
		for (char c = s[s.size() - 1] + 1; c <= 'z'; c++)q.push(s+c);
	}

 }
int main(){
	genereate_pro();
	string s;
	while (cin>>s){
		if (m[s])printf("%d\n", m[s]);
		else printf("0\n");
	}
}