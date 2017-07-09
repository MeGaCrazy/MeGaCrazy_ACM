#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
int main() {
	int arr[4] = { 0 }, n, a[5001];
	bool bla[5001];
	for (int i = 0; i < 5001; i++) {bla[i] = true;}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		arr[a[i]]++;
	}
	int temp = min(arr[1], min(arr[2], arr[3]));
	cout <<temp << endl;
	while (temp>0) {
		int count = 1;
		for (int i = 0; i < n; i++) {
			if (bla[i] == true && a[i] == count) {
				cout << i + 1 <<" ";
				bla[i] = false;
				count++;
				i = -1;
				continue;
			}
		}
		cout << endl;
		temp--;
	}

}
*/
// anthor solu with vectors
/*
int main() {
	vector<int>v[4];
	int n, a; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		v[a].push_back(i);
	}
	int ans = min(v[1].size(), min(v[2].size(), v[3].size()));
	cout << ans << endl;
	for (int i = 0; i <ans; i++) {
		cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;
	}



}
*/ 
//anthor solu with 2d array
int main() {
	int x[4] = {0}, arr[4][5001], a, n, ans;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		arr[a][x[a]++] = i;
	}
	ans = min(x[1], min(x[2], x[3]));
	cout << ans << endl;
	for (int i = 0; i < ans; i++) {
		cout << arr[1][i] << " " << arr[2][i] << " " << arr[3][i] << endl;
	}
}

