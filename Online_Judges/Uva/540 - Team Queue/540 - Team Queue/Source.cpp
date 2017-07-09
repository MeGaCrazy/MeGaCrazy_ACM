#include <iostream>
#include <queue>
#include <string>
using namespace std;
int BelongToteam[1000001];
int main() {
	int n, t, a, b=1;
	while (cin >> n, n) {
		queue<int>teamqueue[1001];
		for (int i = 0; i < n; i++) {
			cin >> t;
			while (t--) {
				cin >> a;
				BelongToteam[a] = i;
			}
		}
		queue<int>pre_order;
		string command;
		cout << "Scenario #" << b++ << '\n';
		while (cin >> command, command[0] != 'S') {
			if (command[0] =='E') {
				cin >> a;
				int team = BelongToteam[a];
				if (teamqueue[team].empty()) {
					pre_order.push(team);
				}
				teamqueue[team].push(a);
			}
			else
			{
				int team = pre_order.front();
				cout << teamqueue[team].front() << endl;
				teamqueue[team].pop();
				if (teamqueue[team].empty())pre_order.pop();
			}
		}
		cout << endl;
	}
}