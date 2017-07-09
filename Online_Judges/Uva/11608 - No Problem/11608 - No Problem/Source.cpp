#include <iostream>
using namespace std;
int main() {
	int n,t=1;
	while (cin >> n, n>=0) {
		int a = n,arr1[13], arr2[13];
		for (int i = 0; i < 12; i++)cin >> arr1[i];
		for (int i = 0; i < 12; i++)cin >> arr2[i];
		cout << "Case " << t++ << ":" << endl;
		for (int i = 0; i < 12;i++) {
			if (a>= arr2[i]){
				cout << "No problem! :D" << endl;
				a -= arr2[i];
		}
			else cout << "No problem. :(" << endl;
			a += arr1[i];
		}
	}
}