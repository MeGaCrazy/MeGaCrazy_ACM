#include <iostream>
using namespace std;
int main() {
	//unsloved
	int n, j = 0, arr[100001]; cin >> n;
	if (n <= 9) {
		cout << n << endl;
		for (int i = 0; i < n; i++)cout << "1 "; 
	}else
	{
		while (n) {
			if (n > 9 && n % 10 < n%11)n -= 10,arr[j++]=10;
			else if (n > 9)n -= 11,arr[j++]=11;
			else n -= 1, arr[j++] = 1;
		}cout << j << endl;
		for (int i = 0; i < j; i++) { cout << arr[i] << " "; }
	}


}