#include <stdio.h>
#include <string.h>
#include <algorithm>
const int N = 1234567;
char arr1[N], arr2[N];
using namespace std;
int main() {
	freopen("in", "r", stdin);
	scanf("%s", &arr1);
	scanf("%s", &arr2);
	int length2 = strlen(arr2);
	int length1 = strlen(arr1);
	sort(arr1, arr1 + length1);
	sort(arr2, arr2 + length2);
	int ans = -1;
	if (length1>length2) {
		for (int i = 0; i<length1; i++) {
			if (i == length2)break;
			if (arr1[i] != arr2[i]) {
				ans = length1 - i;
				break;
			}
		}
	}
	else if (length1<length2) {
		for (int i = 0; i<length2; i++) {
			if (i == length1)break;
			if (arr1[i] != arr2[i]) {
				ans = length2 - i;
				break;
			}
		}
	}
	else if (length1 == length2&&strcmp(arr1, arr2) == 0) {
		ans = -1;
	}
	else {
		for (int i = 0; i<length1; i++) {

			if (arr1[i] != arr2[i]) {
				ans = length1 - i;
				break;
			}
		}
	}
	printf("%d\n", ans);





}