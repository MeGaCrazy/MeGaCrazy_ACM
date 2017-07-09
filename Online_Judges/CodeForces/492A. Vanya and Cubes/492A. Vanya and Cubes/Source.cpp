#include <iostream>
using namespace std;

int main() {
	int sum = 0, cubes = 0, n, count = 0;
	cin >> n;
	int temp = n;
	for (int i = 1; cubes <=n; i++) {
		sum += i;
		cubes += sum;
		count++;
	}
	count--;
	cout << count << endl;

}