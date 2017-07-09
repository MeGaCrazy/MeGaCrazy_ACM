#include <iostream>
using namespace std;


int main() {
	int count = 0;
	int number;
	int people[100];
	int caps[100];
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> people[i] >> caps[i];

	}
	for (int i = 0; i < number; i++) {
		if (caps[i] > (people[i] + 1)) {
			count++;
		}
	}
	cout << count << endl;





}