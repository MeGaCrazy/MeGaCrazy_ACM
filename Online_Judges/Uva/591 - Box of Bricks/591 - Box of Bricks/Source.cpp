#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector <int>v; int n,a,i=1;
	while (cin >> n, n) {
		int count = 0, sum = 0, t = 0;
		for (int i = 0; i < n; i++) {cin>>a,v.push_back(a); sum += a; }
		sum = (sum / n);
		for (int i = 0; i < n; i++) {
			if (v[i] > sum) {
				t += v[i] - sum;
			}
		}
		cout << "Set #" << i++ << endl << "The minimum number of moves is " << t<< "." << endl << endl;
		v.clear();
	}
}