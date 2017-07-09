#include <stdio.h>
#include <string.h>
#define maxn 80
long long n,ne,d[maxn][maxn][7][3],g[maxn][maxn],vis[maxn][maxn][7][3];
int dir[3][2]={0,-1,0,1,1,0};
long long max(long long  a,long long  b)
{
	if(a>b) return a;
	else return b;
}
long long dp(int a,int b,int c,int e)
{
	long long &res=d[a][b][c][e];
	long long &flag=vis[a][b][c][e];
	if(flag) return res;
	flag=1;res=-((long long)1<<60);
	if(c>ne) return res;
	if(a==n&&b==n) 
	{
		if(g[a][b]<0)
		c++;
		if(c<=ne)
		res=g[a][b];
		return res;
	}
	for(int i=0;i<3;i++)
	{
		int newr=a+dir[i][0];
		int neww=b+dir[i][1];
		int newc=c;
		if(g[a][b]<0) newc++;
		if(newr>=1&&newr<=n&&neww>=1&&neww<=n&&g[newr][neww]!=((long long)1<<60))
		{
			int t=g[a][b];
			g[a][b]=((long long)1<<60);
			long long temp=dp(newr,neww,newc,i);
			if(temp!=-((long long)1<<60))
			res=max(res,temp+t);
			g[a][b]=t;
		}
	}
	return res;
}
int main()
{
//	freopen("C:\\Users\\WT\\Desktop\\????.txt","r",stdin);
	int tt=0;
	while(scanf("%lld%lld",&n,&ne)&&!(n==0&&ne==0))
	{
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		scanf("%lld",&g[i][j]);
		memset(d,0,sizeof(d));
		memset(vis,0,sizeof(vis));
		printf("Case %d: ",++tt);
		long long temp=dp(1,1,0,0);
		if(temp>-((long long)1<<60))
		printf("%lld\n",temp);
		else
		printf("impossible\n");				
	}
	return 0;
}