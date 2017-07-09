#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {

	int n,arr[1001];
	while (cin >> n, n) {
		while (true) {
			cin >> arr[0];
			if (arr[0] == 0) {
				cout << endl;
				break;
			}
			for (int i = 1; i < n; i++)cin>>arr[i];
			int cur = 1, index = 0;
			stack <int>mystack;
			while (cur <= n) {
				mystack.push(cur++);
				while (!mystack.empty() && mystack.top() == arr[index]) {
					mystack.pop(); index++;
					if (index == n)break;
				     }
			     }
			if (mystack.empty())cout << "Yes" << endl;
			else cout << "No" << endl;
		   }
	  }
}