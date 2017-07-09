#include <stdio.h>
using namespace std;
int ans,n,arr[20],total,clostedtotal;
void choices(int totallen,int mask,int p){
 if(totallen>total)
	return;
 if(totallen>clostedtotal){
   clostedtotal=totallen;
   ans=mask;
  }
  if(p>=n)return;
 choices(totallen+arr[p],mask|(1<<p),p+1);
 choices(totallen,mask,p+1);
}
int main(){
     freopen("in","r",stdin);
     while(scanf("%d %d",&total,&n)!=EOF){
      for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
       }
       clostedtotal=-1,ans=-1;
        choices(0,0,0);
        for(int i=0;i<n;i++){
         if((ans>>i)&1)
             printf("%d ",arr[i]);
       }
        printf("sum:%d\n",clostedtotal);

   }





}
////////////////// itrative ///////////////////////////
/*
#include <stdio.h>
using namespace std;
int arr[20], total;
int main() {
//        freopen("in","r",stdin);
	while (scanf("%d", &total) != EOF) {
		int track, best = 0, bestc, cnt = 0, ans[20] = { 0 };
		scanf("%d", &track);
		for (int i = 0; i < track; i++) {
			scanf("%d", &arr[i]);
		}
		for (int mask = 0; mask < (1 << track); mask++) {
			int sum = 0, cnt = 0;
			for (int j = 0; j < (track); j++) {
				if (mask & (1 << j)) {
					sum += arr[j];
					cnt++;
				}
			}
			if (sum <= total && sum > best || sum == best && cnt > bestc) {
				best = sum;
				bestc = 0;
				for (int j = 0; j < (track); j++) {
					if (mask & (1 << j)) {
						ans[bestc++] = arr[j];
					}
				}
			}
		}
		for (int i = 0; i < bestc; i++)
			printf("%d ", ans[i]);

		printf("sum:%d\n", best);
	}

}
*/
