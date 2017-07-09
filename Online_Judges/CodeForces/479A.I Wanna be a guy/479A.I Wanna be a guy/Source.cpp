/*#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int count = 0;
	int arr[200];
	int number;
	cin >> number;
	int x[100];
	int y[100];
	int ix, iy;
	cin >> ix;
	for (int i = 0; i < ix; i++) {
		cin >> x[i];
		arr[i] = x[i];
	}
	int temp = ix;
	cin >> iy;
	for (int j = 0; j <iy; j++) {
		cin >> y[j];
		arr[temp++] = y[j];
	}
	sort(arr, arr +(ix+iy));
	int start = 1;
	for (int i = 0; i <(ix+iy); i++) {
		if (arr[i] == start) {
			count++;
			++start;
		}
	}
	if (count == number) {
		cout << "I become the guy." << endl;
	}
	else {
		cout << "Oh, my keyboard!" << endl;
	}




}
*/       ///// another sol by stl <set>
#include <iostream>
#include <set>
using namespace std;
int main() {
	set <int>st;
	int a, n, m, p;
	cin >> n;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a;
		st.insert(a);
	}
	cin >> p;
	for (int i = 0; i < p; i++) {
		cin >> a;
		st.insert(a);
	}
	st.size() == n ? cout << "I become the guy." << endl : cout << "Oh, my keyboard!"<<endl;




}






