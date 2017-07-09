#include <iostream>
#include <string>
using namespace std;
int main() {
	int n,a=0,t=0, k; string s[102];
	cin >> n >> k;
	for (int i = 0; i < n + 1; i++)cin >> s[i];
	int length = s[n].length();
	for (int i = 0; i < n; i++) { 
	   if (s[i].length() < length)a++;
	   if (s[i].length() <= length)t++;
	}--t;cout << (a + 1) + (5 * (a / k)) << " " << t + ((t/ k) * 5)+1 << endl;
}