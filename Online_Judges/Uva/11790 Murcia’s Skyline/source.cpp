#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
const int N = 1234567;
int arrh[N], arrw[N], dpi[N], dpd[N], L[N], pos[N], n, lastI, lastD;
void LDS() {
	reverse(arrh,arrh+n);
	int st = 0, en, len = -1,ind;
	for (int i = 0; i<n; i++) {
		ind=lower_bound(pos,pos+len,arrh[i])-pos;		
		pos[ind] = arrh[i];
		L[ind] = i;
		dpd[i] = ind ? L[ind - 1] : -1;
		if (ind + 1>len) {
			len = ind + 1;
			lastD = i;
		}
	}                                      
}
void LIS() {
	int len =0,ind;
	for (int i = 0; i<n; i++) {
              	ind=lower_bound(pos,pos+len,arrh[i])-pos;		
		pos[ind] = arrh[i];
		L[ind] = i;
		dpi[i] = ind ? L[ind - 1] : -1;
		if (ind + 1>len) {
			len = ind + 1;
			lastI = i;
		}
	}
}
inline int cal(int dp[], int index) {
	int x = index, sum = 0;
	for (; dp[x] >= 0; x = dp[x])sum += arrw[x];
	sum += arrw[x];
	return sum;
}
int main() {
	int t, cas = 1;
	freopen("in.txt", "r", stdin);
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n); int in=-1,de=-1;
		for (int i = 0; i<n; i++)scanf("%d", &arrh[i]);
		for (int i = 0; i<n; i++)scanf("%d", &arrw[i]);
		LIS();
		LDS();
                for(int i=0;i<n;i++){
		 in = max(in,cal(dpi, i));
		 de = max(de,cal(dpd,i));
               }
		printf("Case %d. ", cas++);
		if (in >= de) {
			printf("Increasing (%d). Decreasing (%d).\n", in, de);
		}
		else printf("Decreasing (%d). Increasing(%d)\n", de, in); 
		}
}               `