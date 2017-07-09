#include <string>
#include <iostream>
using namespace std;
/*
int main() {
	char arr[5001]; int n, count = 0, flag = 0;
	cin >> n;
	for (int i = 0; i < n*5; i++) {cin >> arr[i];}
	for (int i = 0; i < n*5; i++) {
	    	count++;
		if (arr[i] == 'O' && arr[i + 1] == 'O' && count!=5) {
			arr[i] = '+', arr[i + 1] = '+';
			flag = 1;break;
		}
		if (count == 5)count = 0;
	}
	count = 0;
	if (flag == 1) {
		cout << "YES" << endl;
		for (int i = 0; i < n*5; i++) {
			count++;cout << arr[i];
			if (count == 5) {cout << endl;count = 0;}
	           }
	}else cout << "NO" << endl;
}
*/
int main() {
	string str, s;
	int n; cin >> n;
	while (n--)
	{
		cin >> s; str += s + '\n';
	}
	int pos = str.find("OO");
	if (pos >= 0) { str.replace(pos, 2, "++"); cout << "YES" << endl << str; }
	else cout << "NO" << endl;






}