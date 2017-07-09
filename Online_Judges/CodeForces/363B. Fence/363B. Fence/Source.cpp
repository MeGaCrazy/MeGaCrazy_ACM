#include <iostream>
using namespace std;
int main() {
	int n, k,sum=0,imin=1,min=2e9,last=0,arr[151000];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (i >= n - k)sum += arr[i];
	}
	for (int i = n - k,j=0;i >= 0; i--) { 
		if(!(i==n-k)) sum += (arr[i] - last);
		if (sum<= min)imin = (i + 1), min = sum;
		last = arr[i + (k - 1)];
	}cout << imin << endl;
}