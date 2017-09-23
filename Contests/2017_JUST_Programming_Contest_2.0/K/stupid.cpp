/*
*   Idea : model the problem as graph and try to all subsets with BFS
*
*    Happy Solving :)
*/
#include <bits/stdc++.h>
using namespace std;
string str;
int ans;
const int n = 3;
int x[] = { 1,-1,1,-1,0,0,-1,1 };
int y[] = { 1,-1,0,0,1,-1,1,-1};
bool Valid(int xx, int yy) {
	return (xx >= 0 && yy >= 0 && xx<n&&yy<n);
}
int check(const string &s) {
	int arr[4][4];
	int m = 0;
	for (int i = 0; i<3; i++) {
		for (int j = 0; j<3; j++) {
			arr[i][j] = s[m++] - '0';
		}
	}
	for (int i = 0; i<3; i++) {
		for (int j = 0; j<3; j++) {
			bool  ok = 0;
			for (int k = 0; k<8; k++) {
				int xx = x[k] + i, yy = y[k] + j;
				if (Valid(xx, yy) && arr[xx][yy]==arr[i][j]+1) {
					ok=1;
					break;
				}
			}
			if (arr[i][j] == 9)continue;
            if(ok==0)return 0;

		}
	}
	return 1;
}

void bfs() {
	queue<string >q;
	q.push(str);
	while (!q.empty()) {
		string s = q.front();
		q.pop();
		int cnt = 0;
		for (int i = 0; i<(int)s.size(); i++) {
			if (s[i] != '0')cnt++;
		}
		if (cnt == 9) {
			if (check(s))ans++;
			continue;
		}
		bool arr[10] = { 0 };
		for (int i = 0; i<(int)s.size(); i++) {
			arr[s[i] - '0'] = 1;
		}
		for (int i = 1; i <= 9; i++) {
			if (arr[i] == 0) {
				for (int j = 0; j<(int)s.size(); j++) {
					string tmp = s;
					if (s[j] == '0') {
						tmp[j] = (char)(i + '0');
						q.push(tmp);
						break;
					}
				}
			}
		}
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
#endif
	string s;
	for (int i = 0; i<3; i++) {
		cin >> s;
		str += s;
	}
	bfs();
	printf("%d\n", ans);
}