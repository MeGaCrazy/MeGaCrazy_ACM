#include <iostream>
#include <algorithm>
#include <string.h>
#define fill(x,y) memset(x,y,sizeof(x));
int arr[1000001];
using namespace std;
int main() {
	int t;
	while (scanf("%d",&t)!=EOF) {
		fill(arr, 0); int cnt1 = 0, cnt2 = 0;
		for (int i = 0; i < t; i++)scanf("%d", &arr[i]);
		sort(arr, arr + t);
		int tmp = (t+1) / 2-1;
			for (int i = 0; i < t; i++) {
				if (arr[i] == arr[tmp])cnt1++;
				else if (t % 2 == 0 && arr[i] == arr[tmp + 1])cnt1++;
			}
			if (t % 2 == 0)cnt2 = arr[tmp + 1] - arr[tmp] + 1;
			else cnt2 = 1;
			printf("%d %d %d\n", arr[tmp], cnt1, cnt2);
		}
}
