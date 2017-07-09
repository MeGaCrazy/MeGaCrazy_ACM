#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
typedef vector<int> vi;
int main() {
	freopen("in.txt", "r", stdin);
	int f, r;
	while (scanf("%d", &f), f) {
		scanf("%d", &r);
		vi vf, vr;
		vector<double> vb;
		int a;
		for (int i = 0; i < f; i++) {
			scanf("%d", &a);
			vf.push_back(a);

		}
		
		for (int i = 0; i < r; i++) {
			scanf("%d", &a);
			vr.push_back(a);
		}
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < r; j++)
				vb.push_back((double) vf[i] / (double) vr[j]);
		}
		sort(vb.begin(), vb.end());
		int sz = vb.size();
		double ans = -1;
		for (int i = 0; i < sz - 1; i++) {
			ans = max(ans, (vb[i + 1] / vb[i]));
		}
		printf("%.2f\n", ans);

	}

}
