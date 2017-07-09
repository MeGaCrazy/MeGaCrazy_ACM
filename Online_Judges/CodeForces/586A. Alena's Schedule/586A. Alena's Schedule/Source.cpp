#include <iostream>
using namespace std;
int main() {
	int i=0,n,arr[101], count = 0;
	for (cin >> n; i < n; i++) { cin >> arr[i]; }
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0 || (arr[i - 1] != 0 && arr[i + 1] != 0 && i>0 && i < n - 1))count++;
	}cout << count << endl;
}