#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#include <string.h>
#include <algorithm>
#include <queue>
#include <iostream>
#include <sstream>
using namespace std;
vector<vector<int> >adj;
typedef vector<int>vi;
bool check(string a, string b) {
	if (a.size() != b.size())return false;
	int cnt = 0;
	for (int i = 0; i<(int)a.size(); i++) {
		if (a[i] != b[i])cnt++;
		if (cnt>1)return false;
	}
	return true;
}
int bfs(int s, int sz, int tar,vector<vector<int> >adj) {
	vector<bool>visit(sz+1, 0);
	vector<int>dis(sz+1, 0);
	dis[s] = 0;
	queue<int>q;
	q.push(s);
	visit[s] = 1;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int i = 0; i<(int)adj[u].size(); i++) {
			int a = adj[u][i];
			if (!visit[a]) {
				dis[a] = dis[u] + 1;
				if (a == tar)return dis[a];
				visit[a] = 1;
				q.push(a);
			}

		}

	}

	return 0;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif

	int t;
	scanf("%d", &t);
	while (t--) {
		char s[15] = {};
		int v = 1;
		map<string, int>mp;
		vector<string>arr;
		while (scanf("%s", &s), s[0] != '*') {
			mp[(string)s] = v++;
			arr.push_back((string)s);
		}
	
		adj.assign(v,vi());
		for (int i = 0; i<(int)arr.size(); i++) {
			for (int j = i + 1; j < (int)arr.size(); j++) {
				if (check(arr[i], arr[j])) {
					int x = mp[arr[i]], y = mp[arr[j]];
					adj[x].push_back(y);
					adj[y].push_back(x);
				}
			}
		}
		cin.ignore();
		string str;
		while (getline(cin,str),str!="") {
			if (str[0] == ' ')break;
			string s1, s2;
			stringstream ss(str);
			ss >> s1 >> s2;
			int sour = mp[(string)s1], tar = mp[(string)s2];
			printf("%s %s %d\n", s1.c_str(), s2.c_str(), bfs(sour, arr.size(),tar,adj));
		}
		if (t)printf("\n");
	}

}