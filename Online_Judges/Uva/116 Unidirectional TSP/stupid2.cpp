#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int m, n;
  freopen("in.txt","r",stdin);
  while( scanf("%d%d", &m, &n) != EOF ){
    int weight[105][105] = {0}, dp[105][105] = {0}, path[105][105] = {0};
    for( int i = 0 ; i < m ; ++i ){
      for( int j = 0 ; j < n ; ++j ){
        scanf("%d", &weight[i][j]);
        dp[i][j] = weight[i][j];
      }
    }

    for( int j = n-2 ; j >= 0 ; --j ){
      for( int i = 0 ; i < m ; ++i ){
        int up, middle, down;
        up = weight[i][j] + dp[(i-1+m)%m][j+1];
        middle = weight[i][j] + dp[i][j+1];
        down = weight[i][j] + dp[(i+1)%m][j+1];

        path[i][j] = INT_MAX;
        if( up <= middle && up <= down ){
          dp[i][j] = up;
          path[i][j] = min( path[i][j], (i-1+m)%m );
        }
        if( middle <= up && middle <= down ){
          dp[i][j] = middle;
          path[i][j] = min( path[i][j], i );
        }
        if( down <= up && down <= middle ){
          dp[i][j] = down;
          path[i][j] = min( path[i][j], (i+1)%m );
        }
      }
    }

    int minPath = INT_MAX, mini = -1; 
    for( int i = 0 ; i < m ; ++i ){
      if( dp[i][0] < minPath ){
        minPath = dp[i][0];
        mini = i;
      }
    }

    int next = mini;
    printf("%d", mini+1);
    for( int i = 0 ; i < n-1 ; ++i ){
      printf(" %d", path[next][i]+1);
      next = path[next][i];
    }
    printf("\n%d\n", dp[mini][0]);
  }
  return 0;
}