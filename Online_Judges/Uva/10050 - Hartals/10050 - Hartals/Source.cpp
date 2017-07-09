#include <iostream>
#include <vector>
#define valid(x) ((x%7==0 || x%7==6))
using namespace std;
int main() {
	int test, days,a,x;
	cin >> test;
	while (test--) {
		cin >> days>> x;
		vector<int>v; int count = 0;
		for (int i = 0; i < x&&cin >> a; i++)v.push_back(a);
		for (int i = 1; i <= days; i++) {
			for (int j = 0; j < x; j++) {
				if (i%v[j] == 0 && !valid(i)) {count++; break;}
			}
		}cout << count << endl;
	}
}