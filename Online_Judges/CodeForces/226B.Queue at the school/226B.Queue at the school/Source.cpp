#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



int main() {
	
	int number;
	char stud[50];
	int t;
	cin >> number >> t;
	for (int i = 0; i < number; i++) {
		cin>>stud[i];
	}
	for (int i = 0; i < t; i++) {

	
	for (int i = 0; i < number-1; i++) {
		if (stud[i] == 'B' && stud[i + 1] == 'G') {
			swap(stud[i], stud[i + 1]);
			++i;
		}
		
	}
	}
	for (int i = 0; i < number; i++) {
		cout << stud[i];
	}
	cout << endl;
	




}