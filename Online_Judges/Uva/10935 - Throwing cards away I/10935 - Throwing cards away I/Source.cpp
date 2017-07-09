#include <iostream>
#include <queue>
using namespace std;
int main() {
	int n;
	while (cin >> n, n) {
		queue<int>q, w;
		for (int i = 1; i <= n; i++)q.push(i);
		while (q.size() != 1) {
			w.push(q.front());
			q.pop();
			q.push(q.front());
			q.pop();
		}cout << "Discarded cards:";
		for (int i = 0; i < n - 1; w.pop(),i++) {
			cout <<" "<< w.front();
			if (i != n - 2)cout << ","; else cout << endl;
		}cout << "Remaining card: " << q.front() << endl;
	}
}