#include <bits/stdc++.h>
#define Max 200 + 5
#define INF 1000000000
//#define INT_MAX 2147483647
#define FOR(i, N) for( int i = 0 ; i < N ; i++ )
#define FOR1e(i, N) for( int i = 1 ; i <= N ; i++ )
#define FORe(i, N) for(int i = 0 ; i <= N ; i++ )
#define FOR1(i, N) for(int i = 1 ; i < N ; i++ )

using namespace std;

int TestCases;
int Length;
int Mins;
double First, Second, Distance;
double X1, X2, Y1, Y2;
double Time, Total;
char Input[Max];


int main(int argc, char** argv) {
//    freopen("in.txt", "r", stdin);
    bool line = false;
    scanf("%d", &TestCases);
    //getchar();
    while(TestCases--) {
        if(line)        puts("");
        line = true;
        Time = Total = 0;
        scanf("%lf %lf", &First, &Second);
        getchar();
        while(gets(Input)) {
            if(!strlen(Input))  break;
            sscanf(Input, "%lf %lf %lf %lf", &X1, &Y1, &X2, &Y2);
            Distance = (sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2))) / 10000;
            Time += Distance;
        }
        Total = Time;
        Mins = (int)(Total * 60 + 0.5);
        printf ("%d:%02d\n", Mins / 60, Mins % 60);
    }

    return 0;
}