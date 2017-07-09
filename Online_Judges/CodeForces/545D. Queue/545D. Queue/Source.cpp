#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, arr[100001],x=0,count=0;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> arr[i];}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		if (arr[i] >= x) { count++; x += arr[i]; }
	}cout <<count << endl;
}