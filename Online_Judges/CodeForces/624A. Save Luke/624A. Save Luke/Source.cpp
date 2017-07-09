#include <iostream>
using namespace std;
int main() {
	int d, l, v1, v2;
	cin >> d >> l >> v1 >> v2;
    printf("%.20f\n", ((double)(l - d) / (double)(v1 + v2)));
}