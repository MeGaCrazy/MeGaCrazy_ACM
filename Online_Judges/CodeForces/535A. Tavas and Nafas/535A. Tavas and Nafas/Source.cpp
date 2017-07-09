#include <iostream>
#include <string>
using namespace std;
int n;	
string o[20] = { "zero","one","two","three","four","five","six","seven","eight","nine",
"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen" };
string t[10] = { "","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };
int main() {
	cin >> n;
	if (n < 20) cout << o[n] << endl;
	else cout << t[n / 10] << (n % 10 ? "-" : "") << (n % 10 ? o[n % 10] : "") << endl;
}