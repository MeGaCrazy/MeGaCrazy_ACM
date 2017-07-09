#include <stdio.h>
using namespace std;
bool sol = false, visit[20] = { 0 };
int n, m, a1[14],a2[14];
void backtrack(int left, int right, int cnt) {
	if (cnt == n) {
		if (right == left)
			sol = true;
		return;
	}
	for (int i = 0; i < m; i++) {
		if (!visit[i]) {
			if (!cnt % 2) {
				if (a1[i] == left) {
					visit[i] = 1;
					backtrack(a2[i], right, cnt + 1);
					visit[i] = 0;
				} else if (a2[i] == left) {
					visit[i] = 1;
					backtrack(a1[i], right, cnt + 1);
					visit[i] = 0;
				}

			} else {
				if (a1[i] == right) {
					visit[i] = 1;
					backtrack(left, a2[i], cnt + 1);
					visit[i] = 0;
				} else if (a2[i] == right) {
					visit[i] = 1;
					backtrack(left, a1[i], cnt + 1);
					visit[i] = 0;
				}
			}

		}

	}

}
int main(){
//  freopen("in","r",stdin);
  while(scanf("%d",&n),n){
     scanf("%d",&m);
     int r1,l1,r2,l2;
     scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
 
     for(int i=0;i<m;i++)
     scanf("%d %d",&a1[i],&a2[i]);
  
     sol=false;
     backtrack(r1,l2,0);
     sol==true?printf("YES\n"):printf("NO\n");   
  }
}
