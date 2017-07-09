#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int d1, d2, d3, temp;
	cin >> d1 >> d2 >> d3;
	temp = min(min(((d1 * 2) + (d2 * 2)), (d1 + d2 + d3)),min((d1+d3)*2,(d2+d3)*2));
	cout << temp << endl;


}