#include <iostream>
using namespace std;
int main() {
	int n, a; double number = 0.0;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >>a; number +=a; };number /= n;
	printf("%.12f\n", number);
}