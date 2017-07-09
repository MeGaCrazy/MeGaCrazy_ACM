#include <stdio.h>
#include <vector>
using namespace std;
vector<int>vi;
int t, n, arr[12];
bool sol = false;
void backtrack(int total, int m) {
	if (total == t) {
		for (int i = 0; i<vi.size(); i++)
			printf(i == 0 ? "%d" : "+%d", vi[i]);
		printf("\n");
		sol = true;
		return;
	}
	for (int i = m; i<n; i++) {
		if (total + arr[i] <= t) {

			vi.push_back(arr[i]);
			backtrack(total+arr[i],i+1);
                          total=0; 
			visit[i] =0; vi.pop_back();
		}
	}
}
int main() {
	freopen("in", "r", stdin);
	while (scanf("%d %d", &t, &n), n) {
		for (int i = 0; i<n; i++){
			scanf("%d", &arr[i]);
                   }
		 sol = false;
                  vi.clear();
		printf("Sums of %d:\n", t);
		backtrack(0,0);
		if (!sol)printf("NONE\n");
	}
}