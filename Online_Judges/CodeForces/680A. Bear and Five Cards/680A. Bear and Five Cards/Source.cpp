#include <iostream>
using namespace std;
int main() {
	int arr[5], v[101] = {0}, sum = 0, max = -1,imax=0;
	for (int i = 0; i < 5; i++) { 
 		cin >> arr[i]; 
		sum += arr[i]; v[arr[i]]++;
	}
	for (int i = 1; i <= 100; i++) {
		if (v[i] > 1 && v[i] * i > max)max = i*v[i],imax = i;
	}cout << sum - (v[imax] <= 3)*(v[imax] * imax) - (v[imax] > 3)*imax * 3 << endl;
}