#include <iostream>
#include <string>
using namespace std;
int main() {
	int n,arr[200001],min=2e9,imin=-1; string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] % 2 != 0 || arr[i+1]%2!=0)continue;
		if (s[i] == 'R'&& s[i + 1] == 'L' && arr[i+1]-arr[i]<min)imin = (arr[i + 1] - arr[i])/2, min = arr[i + 1] - arr[i];
	}cout << imin << endl;
}