#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int arr[5][5];
	int a = 0;
	int b = 0;
	int flag = 0;
	for (int i = 0; i < 5; i++) {
	 for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				a = i;
				b = j;
      		}
 		}
	}
	a = 2 - a;
	a = abs(a);
	b = 2 - b;
	b = abs(b);
	cout << a + b << endl;


}