#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;
int main() {
	int n, m,value; string  s;
	scanf("%d %d", &m, &n);
	map<string,int>w;
	while (m--) {
		cin >> s >> value;
		w[s] = value;
	}
	while (n--) {
		long long sum = 0;
		
		while (cin>>s && s[0] != '.') {
			if (w[s] > 0)sum += w[s];
		 }
		printf("%lld\n", sum);
	}
}