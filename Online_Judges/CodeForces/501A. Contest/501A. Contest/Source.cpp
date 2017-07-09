#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int temp1= max((3 * a) / 10, a-(a / 250)*c);
	int temp2=max((3 * b) / 10, b-(b / 250)*d);
	temp1 > temp2 ? cout << "Misha" << endl : temp1 == temp2 ? cout << "Tie" << endl : cout << "Vasya" << endl;
}