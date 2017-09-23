/*
*   Idea: Remove all such arrays which are wholly contained within another array.
*         Model the problem as a graph. Each array is connected to every other array. 
*         The edge weight is the "saving" you do when you connect them, i.e., 
*         the number of elements in common from one end. We can assume A->B means overlap A's right end with B's left end. Hence,
*         dist[A][B]!=dist[B][A]. I took the edge weights as negative.
*         Create a dummy vertex connected to every other vertex with edge weight 0.
*         TSP (it should run as you have at most 16 vertices).
*         In my case, as edge weights were negative, I simply output the sum of lengths of all arrays + total saving.
*         Happy solving :)
*
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
ll dp[(1 << 17)][17];
ll dist[16][16];
vector<int>a[16];
int n;

int bitmask(ll mask, ll idx)
{
	if (dp[mask][idx] != -1)
	{
		//cout<<mask<<' '<<idx<<endl;
		return dp[mask][idx];
	}
	dp[mask][idx] = (int)2e9;
	bool f = 0;
	for (int i = 1; i <= n; i++)
	{
		if ((mask | (1 << i)) != mask)
		{
			ll tmp = (int)2e9;
			if (dist[idx][i])
				tmp = bitmask(mask | (1 << i), i) + dist[idx][i];
			else
				tmp = bitmask(mask | (1 << i), idx);
			dp[mask][idx] = min(dp[mask][idx], tmp);
			f = 1;
		}
	}
	if (!f)
		dp[mask][idx] = 0;
	//cout<<dp[mask][idx]<<endl;
	return dp[mask][idx];
}
int main()
{
	
#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int s;
		cin >> s;
		a[i].resize(s);
		for (int j = 0; j<s; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i<(1 << 17); i++)
	{
		for (int j = 0; j <= n; j++)
		{
			dp[i][j] = -1;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		dist[0][i] = a[i].size();
		for (int j = 1; j <= n; j++)
		{
			bool f = 1;
			dist[i][j] = a[j].size();
			for (int k = 0; k<a[i].size(); k++)
			{
				int g = k;
				f = 1;
				for (int l = 0; l<a[j].size() && g<a[i].size(); l++)
				{
					if (a[i][g] != a[j][l])
						f = 0;
					g++;
				}
				if (f)
				{
					int tmp = a[j].size() - a[i].size() + k;
					//cout<<i<<' '<<j<<endl;
					dist[i][j] = max(0, tmp);
					break;
				}
			}
		}
	}
	bitmask(0, 0);
	cout << dp[0][0] << endl;
	return 0;
}