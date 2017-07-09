#include <algorithm>
#include <iostream>
using namespace std;
int main() {
	int arr[100001], i , n, y, x=1;
	cin >> n;
	for (int i = 1; i <= n; i++){cin >> arr[i];}
	for ( i = 1; i < n; i++) {if (arr[i] > arr[i + 1]) {x = i; break;}}
	for ( i = x; i <n;i++){if (arr[i] < arr[i + 1]) { y = i; break; }}
	if (i == n)y = n;
	reverse(arr + x, arr + y + 1);
	for (i = 1; i < n; i++) {if (arr[i] > arr[i + 1])break;}
	if (i != n)cout << "no" << endl;
	else cout << "yes" << endl << x << " " << y << endl;
}
