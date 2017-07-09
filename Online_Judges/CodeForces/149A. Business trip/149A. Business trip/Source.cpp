#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[12], n, sum = 0, count = 0;
	cin >> n; 
	for (int i = 0; i < 12; i++) { cin >> arr[i]; }
	sort(arr, arr + 12);
	for (int i = 11;n!=0&& i >= 0; i--) {
		sum += arr[i];
		count++;
		if (sum >= n) break;
	}sum >= n ? cout << count << endl : cout << -1 << endl;
		
}