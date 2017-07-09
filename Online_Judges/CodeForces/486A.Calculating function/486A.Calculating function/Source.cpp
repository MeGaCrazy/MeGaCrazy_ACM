#include <iostream>
using namespace std;


int main() {
	int sum = 0;
	long long number;
	cin >> number;
	if (number % 2 == 0) {
		number = number / 2;
		cout << number << endl;
	}
	else
	{
		number = (number+1) / 2;
		number = number*-1;
		cout << number << endl;
	}





}