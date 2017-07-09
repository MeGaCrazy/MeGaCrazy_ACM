#include <iostream>
using namespace std;
int main() {
	int n, k, num = 0;
	int  score[100];
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin>>score[i];
	for (int i = 0; i < n; i++) {
		if (score[i] >= score[k - 1] && score[i] > 0) {
			num++;
		}
	}cout << num << endl;
}