#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <utility>
#include <algorithm>

#define pb      push_back
#define fi      first
#define se      second
#define mp      make_pair
#define sz(a)   (int)a.size()

#define EPS     1e-9
#define INF     (int)1e9
#define MAXN    100

using namespace std;

typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<int>     vi;
typedef vector<ii>      vii;

int n, k;
vector<pair<int, ii> > graph[MAXN];
int dist[MAXN];
int times[5];

void dijkstra()
{
    dist[0] = 0;
    priority_queue<pair<int, ii>, vector<pair<int, ii> >, greater<pair<int, ii> > > pq; pq.push(mp(0, ii(0, 0)));

    while(!pq.empty())
    {
        pair<int, ii> c = pq.top(); pq.pop();
        int ele = c.fi, d = c.se.fi, h = c.se.se;
        
        if(d > dist[h]) continue;
        
        for(int i = 0; i < sz(graph[h]); i++)
        {
            int newEle = graph[h][i].fi, t = graph[h][i].se.fi, w = graph[h][i].se.se;
            int newD = dist[h] + w + ((newEle != ele && h != 0) ? 60 : 0);
            if(newD < dist[t])
            {
                dist[t] = newD;
                pq.push(mp(newEle, ii(newD, t)));
            }
        }
    }
}

int main()
{
    while(scanf("%d %d", &n, &k) != EOF)
    {
        for(int i = 0; i < MAXN; i++) { graph[i].clear(); dist[i] = INF; }
        for(int i = 0; i < n; i++) scanf("%d", times+i);
        for(int i = 0; i < n; i++)
        {
            int floors[MAXN], f = 0; 
            char c;
            scanf("%d", floors+f);
            f++;
            while(scanf("%c", &c), c != '\n')
            {
                scanf("%d", floors+f); f++;
            }

            for(int j = 0; j < f-1; j++)
                for(int l = j+1; l < f; l++)
                {
                    graph[floors[j]].pb(mp(i, ii(floors[l], times[i]*(floors[l]-floors[j]))));
                    graph[floors[l]].pb(mp(i, ii(floors[j], times[i]*(floors[l]-floors[j]))));
                }
        }
        dijkstra();
        if(dist[k] != INF) printf("%d\n", dist[k]);
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}