#include <iostream>
#include <queue>
#include <string>
#define F first
#define S second
using namespace std;
int main() {
	int tall, m, t, a; string s;
	cin >> t;
	while (t--) {
		cin >> tall >> m;
		tall = tall* 100;
		int flag = 0, cnt = 0, sum = 0;
		queue<int>l, r;
		for (int i = 0; i < m; i++) {
			cin >> a >> s;
			if (s[0] == 'l')l.push(a);
			else r.push(a);

		}// for hint :: iam going forward and iam coming back if there is people in right or left okey and every time i make it cnt++ w kol mara b7wl a5od aktr 7mola a2dr 3liha walahy mfi4 7omola tamam ana kda kda ri7 ll nas ely fi el n7ia el tania =D xD
		while (!l.empty() || !r.empty()) {
			cnt++; sum = 0;
			if (flag == 0) {
				while (!l.empty() && sum + l.front() <= tall) {sum += l.front(), l.pop();}
			}
			else
			{
				while (!r.empty() && sum + r.front() <= tall) { sum += r.front(), r.pop();}
			}
			flag = 1 - flag;
		}cout << cnt << endl;
	}
}