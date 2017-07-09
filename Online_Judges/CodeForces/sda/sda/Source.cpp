//============================================================================
// Name        : b.cpp
// Author      : Michael
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[200001];

int main() {
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	
	scanf("%d", &n);
	int tmp = n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = n-1; i>=0; i--) {
		if (i <= (n - i + 1)) {
			reverse(arr + i, arr + (n - i + 1));
		}
		
	}

	for (int i = 0; i<n; i++) {
		if (i != 0)printf(" ");
		printf("%d", arr[i]);
	}
	return 0;
}
