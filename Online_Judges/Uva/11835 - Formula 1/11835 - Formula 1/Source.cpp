#include <iostream>
#include <string.h>
#define fill(x,y) memset(x,y,sizeof(x));
using namespace std;
void do_it() {



}
int main() {
	int arr[110][110], sc[110], g, p,n,x;
	while (cin >> g >> p,g,p) {
		for (int i = 1; i <= g; i++) {
			for (int j = 1; j <= p; j++)
				cin >> arr[i][j];
		}
		cin >> n;
		while (x--) {
			fill(sc, 0);
			cin >> x;
			for (int i = 1; i <= x; i++) {
				cin >> sc[i];
			}
		}
	}


}