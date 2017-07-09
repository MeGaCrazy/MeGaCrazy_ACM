#include <iostream>
#include <vector>
using namespace std;
int main() {
	// unsloved there is something i did't understand 
	int t, n, a,i=1; vector <int>v;
	cin >> t;
	while (t--) {
		cin >> n; v.clear();
		int sum = 0, flag = -1; bool ok = false;
		for (int i = 0; i < n&&cin >> a; i++)v.push_back(a);
		for (int i = 0; i < n&&cin>>a; i++) {
			sum += (v[i] - a);
			if (sum < 0)flag = -1,ok=false;
			else if (sum >= 0 && ok == false)flag = (i + 1),ok = true;
		}
		if (flag < 0)cout << "Case " << i++ << ": " << "Not possile" << endl;
		else if(flag>=0)cout << "Case " << i++ << ": " << "Possible from station "<<flag << endl;
	}
}