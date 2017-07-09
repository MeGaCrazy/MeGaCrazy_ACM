#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, d, maxs; int n,i=0, q, maxnumber=-1,number; double price, maxprice;
	while (cin>>n>>q) {
		if (!n&&!q)return 0;
		maxnumber = -1, number = 0;price = 0.0, maxprice = 0.0;
		for (int i = 0; i < n; i++) {
			cin.ignore();
			getline(cin, d);
		}
		while (q--) {
			getline(cin, s);
			cin >> price >> number;
			for (int i = 0; i < number; i++) {
				cin.ignore();
			getline(cin, d);
			}
			if (number > maxnumber || (number == maxnumber && price < maxprice))maxnumber = number, maxs = s,maxprice=price;
		}
		if (i > 0)cout << endl;
		cout << "RFP #" << ++i << endl << maxs << endl;
	}

}