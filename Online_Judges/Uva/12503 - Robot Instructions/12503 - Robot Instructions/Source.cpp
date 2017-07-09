#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main() {
	char s[101];
	int n, x,a, arr[101] = {0}, sum = 0;
	cin >> n;
	while (n--) {
		cin >> x; sum = 0;
		for (int i = 1; i <= x; i++) {
			scanf("%s", s);
			if (strcmp(s, "LEFT") == 0)sum--,arr[i]=-1;
			else if (strcmp(s, "RIGHT") == 0)sum++,arr[i]=1;
			else {
				scanf("%s %d", s, &a);
				sum += arr[a];
				arr[i] = arr[a];
			}
		}cout << sum << endl;
	}
}