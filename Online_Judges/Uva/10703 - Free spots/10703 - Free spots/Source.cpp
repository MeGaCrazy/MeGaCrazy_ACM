#include <iostream>
using namespace std;
bool arr[505][505];
int main() {
	 int  h, w, n;
	while (cin >> w >> h >> n, w) {
		while (n--) {
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			if (x2 > x1)swap(x1, x2);
			if (y2 > y1)swap(y1, y2);
			for (int i = y2 - 1; i < y1; i++) {
				for (int j = x2 - 1; j < x1; j++) {
					arr[i][j] = true;
				}
			}
		}int cnt = 0;
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < w; j++) {
					if (!arr[i][j])cnt++;
					else arr[i][j] = false;
				}
			}

		
		if (cnt == 0)cout << "There is no empty spots." << endl;
		else if (cnt == 1)cout << "There is one empty spot." << endl;
		else cout << "There are " << cnt << " empty spots." << endl;
	}
}