#include <iostream>
#include <set>
using namespace std;
int main() {
	int i = 0, n; char x;
	set <char> s1, s2;
	for (cin >> n; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> x;
			if (i == j || j == (n - i - 1))s1.insert(x); else s2.insert(x); 
		}
	}if (s1.size() == 1 && s2.size() == 1 && s1!=s2)cout << "YES" << endl; else cout << "NO" << endl;
}