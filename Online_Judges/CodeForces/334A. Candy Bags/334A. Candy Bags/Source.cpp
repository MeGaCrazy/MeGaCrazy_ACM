#include <iostream>
using namespace std;
int main() {
	int n, arr[10001],count=0;
	cin >> n;
	for (int i = 0; i < n*n; i++) {arr[i] = i + 1;}
	int start = 0, end = n*n - 1;
	while (start<end) {
		count += 2;
		cout << arr[start++] << " " << arr[end--] << " ";
		if(count==n)cout<<endl,count=0;
	     
	}
}