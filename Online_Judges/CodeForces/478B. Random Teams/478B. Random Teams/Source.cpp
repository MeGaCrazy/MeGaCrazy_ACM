#include <iostream>
using namespace std;
int main() {
	long long n, m,temp,temp2; 
	cin >> n >> m;
    temp = n - (m - 1);
    temp2 = n / m;
	cout << ((temp2*(temp2 - 1)) / 2)*m + (n%m)*temp2 << " " << (temp*(temp - 1)) / 2 << endl;
}