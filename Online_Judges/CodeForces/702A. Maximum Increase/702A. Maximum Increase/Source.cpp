#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, b,best=1,a,count=1;
	cin >> n >>a;
	for (int i = 0; i < n-1&&cin>>b; i++,a=b) {
       b > a ? ++count: count = 1; best = max(best, count);
	}cout << best << endl;
}