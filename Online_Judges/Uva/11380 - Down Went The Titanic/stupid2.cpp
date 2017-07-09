#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <fstream>

#define INF (1000)
#define MAX 1805

using namespace std;
int s, t, n, m, f, p[MAX];
bool vis[MAX];
int g[MAX][MAX];
vector<int> ady[MAX];
void augment(int v, int minEdge) {
  if(v == s) {
    f = minEdge;
    return;
  } else if(p[v] != -1) {
    augment(p[v], min(minEdge, g[p[v]][v]));
    g[p[v]][v] -= f;
    g[v][p[v]] += f;
  }
}
int edmondsKarp() {
  int mf = 0;
  while(true) {
    f = 0;
    memset(vis, false, sizeof(vis));
    memset(p  , -1   , sizeof(p));
    vis[s] = true;
    queue<int> q;
    q.push(s);
    while(!q.empty()) {
      int u = q.front();
      q.pop();
      if(u == t)break;
      for(int i = 0; i < ady[u].size(); i++) {
        int v = ady[u][i];
        if(g[u][v] > 0 && !vis[v])
          vis[v] = true, q.push(v), p[v] = u;
      }
    }
    augment(t, INF);
    if(f == 0) break;
    mf += f;
  }
  return mf;
}
int dx[4] = {0, 0, 1,-1};
int dy[4] = {1,-1, 0, 0};

int filas, cols, P;
char mapa[35][35];
int id[35][35];
bool esvalido(int i, int j) {
  return (i >= 0 && i < filas && j >= 0 && j < cols && mapa[i][j] != '~');
}
void crearArco(int u, int v, int peso) {
  g[u][v] = peso;// el arco de vuelta peso = 0
  ady[u].push_back(v);
  ady[v].push_back(u);//OJO!!! como estamos recorriendo la lista de adyacencia
}
void construirGrafo() {
  memset(g, 0, sizeof(g));
  for(int i = 0; i < n; i++)ady[i].clear();

  for(int i = 0; i < filas; i++)
    for(int j = 0; j < cols; j++) {
      char car = mapa[i][j];
      if(car != '~') {
        int entra = id[i][j], sale = entra + 1;
        if(car == '.' || car == '*') crearArco(entra, sale, 1);
        else                         crearArco(entra, sale, INF);
        for(int k = 0; k < 4; k++) {
          int a = i + dx[k], b = j + dy[k];
          if(esvalido(a, b))
            crearArco(sale, id[a][b], INF);
        }
        if(car == '*') crearArco(s, entra, 1);
        if(car == '#') crearArco(sale, t, P);
      }
    }
}
int main() {
  freopen("in.txt", "r", stdin);
  while(scanf("%d%d%d", &filas, &cols, &P) == 3) {
    getchar();// '\n'
    memset(id, -1, sizeof(id));
    n = 2;// s = 0, t = 1;
    for(int i = 0; i < filas; i++) {
      gets(mapa[i]);
      for(int j = 0; j < cols; j++)
        if(mapa[i][j] != '~') {
          id[i][j] = n;// n los de entrada , n + 1 los de salida de cada celda
          n += 2;
        }
    }
    s = 0;
    t = 1;
    construirGrafo();
    printf("%d\n", edmondsKarp());
  }
  return 0;
}