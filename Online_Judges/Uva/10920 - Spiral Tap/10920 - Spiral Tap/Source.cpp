#include <iostream>
#include <string.h>
using namespace std;
enum dir { up=0,left,down,right };
int dir_r[] = { 0,0,-1,0 };
int dir_c[] = { 1,-1,0,1 }; 
int avoid_TLE(int &n, int &m) {
	int c = (n + 1) / 2, r = (n + 1) / 2, move = 1; bool flag = false, i = 1;
	while (i < m) {
		c = 0;
		while()




	}






}
int  line_col(int &n,int &m) {
	int c = n, r = n, steps = n, dir = 0;
	long long t = n*n;
	while (t > 0) {
		for (int i = 0; i < 4 && t>0; i++) {
			int moves = steps - 1;
			if (i == 3)--moves;
			for (int j = 0; j < moves&& t>0; j++) {
				if (t-- == m) { n = r, m = c; return 0;}
				r += dir_r[dir]; c += dir_c[dir];
			}
			dir = (dir + 1) % 4;
		}
		if (t-- == m) { n = r, m = c; return 0; }
		r += dir_r[dir]; c += dir_c[dir];
		steps -= 2;
	}
	return 0;
}

int main() {
	int n, m;
	while (cin >> n >> m,n&&m) {
		line_col(n, m);
		cout << "Line = " << n << ", column = " << m << ".\n";
	}
}
