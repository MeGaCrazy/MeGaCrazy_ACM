#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s = { "apwberxxxq" };int sumW = 0, sumB = 0;char a;
	for (int i = 0; i < 64; i++) {
		cin >> a;
		if (a >= 65 && a < 97 && a != '.'&& a!='K') {a += 32;	if (a == 'n')a ='b';sumW += s.find(a);}
		else if (a > 97 && a != '.'&&a != 'k') {if (a == 'n')a = 'b';sumB += s.find(a);}
	}
	if (sumB == sumW) {cout << "Draw" << endl;}
	else if (sumB > sumW) {cout << "Black" << endl;}
	else{cout << "White" << endl;}
	/* anthor sol
	char ch;

	int A[300] = {0}, sum = 0;  A['Q'] = 9, A['R'] = 5, A['B'] = A['N'] = 3, A['P'] = 1;    A['q'] = -9, A['r'] = -5, A['b'] = A['n'] = -3,A['p'] = -1;

	while(scanf("%c", &ch) != EOF)
	{
	sum += A[ch];
	}

	printf("%s\n", sum > 0 ? "White" : sum ? "Black" : "Draw");

	*/

}