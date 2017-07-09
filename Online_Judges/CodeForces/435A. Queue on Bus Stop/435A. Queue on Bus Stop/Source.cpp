#include <iostream>
using namespace std;
int main() {
	int n, m,x,count = 0, sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n&&cin>>x; i++) {
		if ((sum + x) <= m)sum += x;
		else count++, sum=x;
	}cout << count+(sum>0) << endl;
}