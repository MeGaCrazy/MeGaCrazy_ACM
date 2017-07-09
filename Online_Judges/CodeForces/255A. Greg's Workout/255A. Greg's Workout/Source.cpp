#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, x, arr[3] = {0};
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		arr[(i + 3) % 3] += x;
	}int temp = max(arr[0], max(arr[1], arr[2]));
	temp == arr[1] ? cout << "chest" << endl : temp == arr[2] ? cout << "biceps"<<endl : cout << "back" << endl;
}