#include <iostream>
#include <string>
using namespace std;
int main() {
	int arr[5], sum = 0; string s;
	cin >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> s; int length = s.length();
	for (int i = 0; i < length; i++) {sum += arr[s[i] - '0'];}cout << sum << endl;
}