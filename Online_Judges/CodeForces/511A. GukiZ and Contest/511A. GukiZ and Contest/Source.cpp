#include <iostream>
using namespace std;
int main() {
	int n, arr[2001]; cin >> n;
	for (int i = 0; i < n; i++) {cin >> arr[i];}
	for (int i = 0; i < n; i++) {
	     int count = 1;
	   for (int j = 0; j < n; j++){ if(arr[i] < arr[j])count++;}
	   cout << count <<" ";
	}cout << endl;



}