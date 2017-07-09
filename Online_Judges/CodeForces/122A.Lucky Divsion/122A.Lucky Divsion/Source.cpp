#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int bla = 0;
	int test[] = { 4,7,47,74,44,77,447,444,477,777,744,774 };
	int hi = 0;
	int flag = 0;
	int num;
	int temp = 0;
	cin >> num;
	temp = num;
	for (int i = 0; i < 12; i++) {
		if (temp%test[i] == 0) {
			flag = 0;
			bla = 1;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	for (int i = 2; bla==0&& i <=sqrt(num); i++) {
	 if (num % 4 == 0  || num%7==0) {
			flag = 0;
			hi = 0;
			break;
		}
	 else if (num%i == 0) {
		  hi = 1;
			break;
		}
		
		else
		{
			hi = 1;
			
		}
	}

	if (hi == 1) {
		while (num) {
			if ( num%10 == 7 || num%10 == 4) {
				flag = 0;
			}
			else
			{
				flag = 1;
				break;
			}
			num = (num / 10);
		}
	}
	
	if (flag == 1 || num==1) cout << "NO" << endl;
	else {
		if (flag == 0) cout << "YES" << endl;
	}



}