#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 1; i < n; i++) { i % 2 == 0 ? cout << " I love that" : i == 1 ? cout << "I hate that" :cout<< " I hate that"; }
	n % 2 == 0 ? cout << " I love it" << endl : n == 1 ? cout << "I hate it" << endl : cout << " I hate it" << endl;
}