#include <iostream>
#include <map>
using namespace std;
int main() {
	map<int, double>m;
	map<int, double>::iterator it;
	int arr[100001]; int n; double a;
	cin >> n; cout << endl;
	while (n--) {
		for (int i = 0; i < 3; i++)cin >> arr[i];
		for (int i = 0; i < 3; i++) {
			cin >> a; m[arr[i]] = a;
		}
		for (int i = 1; i <= 3; i++) {
			it = m.find(i);
			if (it != m.end())cout << it->second << endl;
		}
	}
}