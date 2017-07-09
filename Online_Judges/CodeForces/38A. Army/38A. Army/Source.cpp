#include <iostream>
using namespace std;
int main() {
	int arr[102], a, b, sum = 0, n;
	cin >> n;
	for (int i = 1; i <= n - 1; i++)cin >> arr[i];
	cin >> a >> b;
	for (a; a < b; a++)sum += arr[a];
	cout << sum << endl;
}