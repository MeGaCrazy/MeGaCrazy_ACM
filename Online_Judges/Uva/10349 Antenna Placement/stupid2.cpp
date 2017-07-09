#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<bitset>
#include<algorithm>
#include<functional>
#include<deque>
// C
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cctype>
#include<cmath>
// namespace
using namespace std;
// typedef
typedef long long lli;
typedef unsigned long long ull;
// const variable
#define MAX_N 50
#define MAX_M 1000
#define INF 2e9
#define NONE -1
#define MAX(x, y, z) {	return max(max(x,y),z);	}
#define MIN(x, y, z) {	return min(min(x,y),z);	}
#define EPS 1e-6
const double PI = 2.0 * acos(0.0);
const int mx[] = { 0, 1, 0, -1 };
const int my[] = { -1, 0, 1, 0 };
// main
int n, m;
vector<int> E[MAX_N * MAX_N];
bool V[MAX_N * MAX_N];
int match[MAX_N * MAX_N];
char T[MAX_N][MAX_N];
int convert(int a, int b){
	return a * m + b;
}
bool DFS(int source){
	for (int i = 0; i < E[source].size(); i++){
		int target = E[source][i];
		if (!V[target]){
			V[target] = true;
			if (match[target] == NONE || DFS(match[target])){
				match[target] = source, match[source] = target;
				return true;
			}
		}
	}
	return false;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				E[convert(i,j)].clear();
		for (int i = 0; i < n; i++)
			scanf("%s", T[i]);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (T[i][j] == 'o')	continue;
				for (int k = 0; k < 4; k++){
					int nextX = j + mx[k], nextY = i + my[k];
					if (nextX < 0 || nextX >= m || nextY < 0 || nextY >= n || T[nextY][nextX] == 'o')
						continue;
					E[convert(i, j)].push_back(convert(nextY, nextX));
				}
			}
		}
		int ans = 0;
		memset(match, NONE, sizeof(match));
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (T[i][j] == '*' && match[convert(i, j)] == NONE){
					memset(V, false, sizeof(V));
					if (DFS(convert(i, j)))
						ans++;
				}
			}
		}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (T[i][j] == '*' && match[convert(i, j)] == NONE)
					ans++;
		printf("%d\n", ans);
	}
	return 0;
}