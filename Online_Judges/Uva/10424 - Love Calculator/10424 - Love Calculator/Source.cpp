#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
using namespace std;
int rec(int n) {
	if (n / 10 == 0)return n;
	else return rec(n % 10 + rec(n / 10));
}
int main() {
	string s1, s2;
	while (getline(cin,s1)&&getline(cin,s2)) {
		int sum1 = 0,sum2 = 0,length = s1.length(), length2 = s2.length();
		for (int i = 0;i<length; i++) {
			if (s1[i] >= 97 && s1[i] <= 122)s1[i] -= 32;
			if (s1[i] >= 65 && s1[i] <= 97)sum1+= (((int)s1[i]) - 64);
		}
		for (int i = 0;i<length2; i++) {
			if (s2[i] >= 97 && s2[i] <= 122)s2[i] -= 32;
			if (s2[i] >= 65 && s2[i] <= 97)sum2 += (((int)s2[i]) - 64);
		}
		sum1 = rec(sum1); sum2 = rec(sum2);
		if (sum1 > sum2)swap(sum1, sum2);
		cout << setprecision(2);	
		cout << fixed << (double)sum1* 100.0 / sum2 << " %" << endl;
	}

}