#include <bits/stdc++.h>
using namespace std;
const int N=26;
int adj[N][N];
int cost[N];
#define inf  1e8
int main(){
#ifndef ONLINE_JUDGE
       freopen("in.txt","r",stdin);
#endif
   int t;
	scanf("%d", &t);
	getchar();
	getchar();
	//getchar();
	while (t--) {
	       memset(cost,0,sizeof(cost));
               for(int i=0;i<26;i++)  {
                 for(int j=0;j<26;j++){
                   adj[i][j]=inf;
                 }
               }
		char str[200] = {};
		while (cin.getline(str, 200), strlen(str)) {
			char courses[200] = {}, mycoures;
			int _time = 0;
			sscanf(str, " %c %d %s", &mycoures, &_time, &courses);
			int v = mycoures - 'A';
			cost[v]=_time;
			for (int i = 0; i<(int)strlen(courses); i++) {
				int u = courses[i] - 'A';
			        adj[u][v]=1;
			        //adj[u][v]=-1*_time;
			}
			memset(str, 0, sizeof(str));
		}
		for(int i=0;i<26;i++){
		   for(int j=0;j<26;j++){
		     if(adj[i][j]==1){
		         adj[i][j]=(cost[i]+cost[j])*-1;
		      }
		   }
		}


		int ans=0;
		for(int k=0;k<26;k++){
		   for(int i=0;i<26;i++){
		      for(int j=0;j<26;j++){
		        adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
		        ans=min(adj[i][j],ans);
		      }
		   }
		}

		printf("%d\n",-1*ans);
		if(t)printf("\n");
	
	  }





}