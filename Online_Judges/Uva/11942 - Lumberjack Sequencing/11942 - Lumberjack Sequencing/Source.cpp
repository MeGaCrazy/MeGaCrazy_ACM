#include <iostream>
using namespace std;
int main() {
	int n, count,a,b,count2;
	cin >> n;
	cout<<"Lumberjacks:"<<endl;
	while (n--) {
		count = 1, count2 = 1;
		cin >> a;
		for (int i = 0; i < 9; a=b,i++) {
			cin >> b;
			if (a > b)count++; else if (a < b)count2++;
		}if (count == 10 || count2 == 10)cout << "Ordered" << endl; else cout << "Unordered" << endl;
	}
}