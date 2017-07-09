#include <algorithm>
#include <iostream>
using namespace std;
int main() {
	int arr[200001];
	long long n, count1 = 0,count2=0;
	cin >> n;
	for (int i = 0; i < n; i++) {cin >> arr[i];}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[0])count1++;
		else if (arr[i] == arr[n-1])count2++;
	}
	arr[0] != arr[n - 1] ? cout<<arr[n - 1]-arr[0]<<" "<< count1*count2<<endl : cout<<arr[n - 1]-arr[0]<<" "<<n*(n-1)/2<<endl;
}