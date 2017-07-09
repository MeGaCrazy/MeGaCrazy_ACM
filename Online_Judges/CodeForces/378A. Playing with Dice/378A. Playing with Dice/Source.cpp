#include <iostream>
using namespace std;
int main() {
	int a, b,count=0, acount=0, bcount = 0;
	cin >> a >> b;
	for (int i = 1; i <= 6; i++) {
		if (abs(i - a) < abs(i - b))acount++;
		else if (abs(i - b) < abs(i - a))bcount++;
		else count++;
	}cout << acount<<" "<<count<<" "<< bcount << endl;
}