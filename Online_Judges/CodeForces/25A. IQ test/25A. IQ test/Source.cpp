#include <iostream>
using namespace std;
int main() {
	int count = 0;
	int arr[100];
	int number;
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i <3; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	if (count >= 2) {
		for (int i = 0; i < number; i++) {
			if (arr[i] % 2 != 0) {
				cout << i+1 << endl;
				break;	}
		    }
	}
	else
	{
		for (int i = 0; i < number; i++) {
			if (arr[i] % 2 == 0) {
				cout << i+1 << endl;
				break;}
		   }

	}






}