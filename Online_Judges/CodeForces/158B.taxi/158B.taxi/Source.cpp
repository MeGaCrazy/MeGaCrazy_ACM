#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int sum = 0, count = 0, number;
	cin >> number;
	int arr[100001];
	for (int i = 0; i < number; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + number);
	int i = number - 1, k = 0;
	while(k != i) {
		if (arr[i] + arr[k] <= 4) {
			arr[i] += arr[k];
			k++;
		}
		else
		{
			i--;
			count++;
		}
	}
	cout << count+1 << endl;
	

}