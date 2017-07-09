#include <iostream>
#include <string.h>
#define fill(x,y) memset(x,y,sizeof(x));
using namespace std;
int main() {
	int n,arr[101][101];
	while (cin >> n, n) {
		int  flagi, flagj, cntodd = 0, sum = 0; fill(arr, 0);
		for (int i = 1,j; i <= n;i++) {
			int sum = 0;
			for (j = 1; j <= n&&cin >>arr[i][j];sum+=arr[i][j],j++);
			if (sum & 1)cntodd++, flagi = i;
		}
		if (cntodd > 1)cout << "Corrupt" << endl;
		else
		{
			int cntoddj = 0;
			for (int i = 1; i <= n; i++) {
				int sum = 0;
				for (int  j = 1; j <= n; j++)sum += arr[j][i];
				if (sum & 1)cntoddj++,flagj=i;
			}
			if (cntodd+cntoddj>1)cout << "Corrupt" << endl;
			else if (cntodd == 1 && cntoddj==1)cout << "Change bit (" << flagi << "," << flagj << ")" << endl;
		}

	}

}