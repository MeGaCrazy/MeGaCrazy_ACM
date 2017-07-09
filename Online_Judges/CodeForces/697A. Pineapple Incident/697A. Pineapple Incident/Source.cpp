#include <iostream>
using namespace std;
int main() {
	int t, s, x;
	cin >> t >> s >> x;
	t == x || (x-t)%s<2 && x!=t+1 &&x>t? cout << "YES" << endl : cout << "NO" << endl;
}