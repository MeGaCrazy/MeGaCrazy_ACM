#include <iostream>
#include <algorithm>
int arr[300001];
using namespace std;
int main() {
	long long n, sum=0, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];	sum += arr[i];
       }
	temp = sum;
	sort(arr, arr + n);
	for (int i = 0; i < (n - 1); i++) {
		temp -= arr[i];
		sum += arr[i] + temp;
	}cout << sum << endl;

}