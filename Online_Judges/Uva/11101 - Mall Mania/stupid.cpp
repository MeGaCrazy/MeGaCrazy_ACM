#include <cstdio>
#include <cstring>
#include <queue>
#define MP make_pair
using namespace std;
 
typedef pair<pair<int, int>, int> Walk;
 
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
 
bool vis[2001][2001], m2[2001][2001];
 
int main() {
  int p;
  while (scanf("%d", &p) && p) {
    queue<Walk> q;
    memset(vis, 0, sizeof(vis));
    while (p--) {
      int x, y;
      scanf("%d%d", &x, &y);
      vis[x][y] = true;
      q.push(MP(MP(x, y), 0));
    }
    memset(m2, 0, sizeof(m2));
    scanf("%d", &p);
    while (p--) {
      int x, y;
      scanf("%d%d", &x, &y);
      m2[x][y] = true;
    }
    while (!q.empty()) {
      Walk now = q.front();
      int x = now.first.first, y = now.first.second;
      int dis = now.second;
      q.pop();
      if (m2[x][y]) {
        printf("%d\n", dis);
        break;
      }
      for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx > 2000 || ny < 0 || ny > 2000 || vis[nx][ny]) {
          continue;
        }
        vis[nx][ny] = true;
        q.push(MP(MP(nx, ny), dis + 1));
      }
    }
  }
  return 0;
}