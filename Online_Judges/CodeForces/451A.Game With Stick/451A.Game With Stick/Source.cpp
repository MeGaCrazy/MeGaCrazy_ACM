#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
	min(n, m) % 2 == 0 ? cout << "Malvika" : cout << "Akshat";
}