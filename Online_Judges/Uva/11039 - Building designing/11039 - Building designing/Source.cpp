#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int count(vector<int>v1, vector<int>v2) {
	int count = 0, j = 0, i = 0, tmp = -2e9;
	int length1 = v1.size(), length2 = v2.size();
	if (v1[0] < v2[0]) {
		while (1) {
			while (v1[i] < tmp) {
				i++;
				if (i == length1)return count;
			} count++, tmp = v1[i];
			while (v2[j] < tmp) {
				j++;
				if (j == length2)return count;
			}count++, tmp = v2[j];
		}
	}
	if (v1[0] > v2[0]) {
		while (1) {
			while (v2[i] < tmp) {
				i++;
				if (i == length2)return count;
			}count++, tmp = v2[i];
			while (v1[j] < tmp) {
				j++;
				if (j == length1)return count;
			}count++, tmp = v1[j];
		}
	}
	return count;
}
int main() {
	ios::sync_with_stdio(false);
	int t, n, a;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int>v1, v2;
		for (int i = 0; i < n&&cin >> a; i++) {
			if (a < 0)v2.push_back(-a); else v1.push_back(a);
		}sort(v1.begin(), v1.end()); sort(v2.begin(), v2.end());
		cout << count(v1, v2) << endl;
	}
}
/*
int main() {
	ios::sync_with_stdio(false);
	int n, x,a;
	cin >> n;
	// unsolved cause of some 5ra i don't know =D && although the code run in two test cases in example idk :) 
	while (n--) {
		cin >> x; int count = 0, i=0, j=0, tmp = -1e9;
		vector <int>v1, v2;
		for (int i = 0; i < x; i++) {
			cin >> a;
			if (a < 0)v2.push_back(-a); else v1.push_back(a);
		}
		sort(v1.begin(), v1.end()); sort(v2.begin(), v2.end());
		if (v1[0] < v2[0]) {
			int n = v1.size(), m = v2.size();
			for (; i < n; i++) {
				while (i < n&&v1[i] < tmp)i++;
				if (i==n||v1[i] < tmp)break;
				if (j == m && i < n) { count++; break; }
				for (; j < m; tmp = v2[j], j++) {
					if (v2[j]>v1[i]) { count += 2; tmp = v2[j], j++; break; }
				}
			}
		}
		else {
			int n = v2.size(), m = v1.size();
			for (; i < n; i++) {
				while (i < n&&v2[i] < tmp)i++;
				if (i==n||v2[i] < tmp)break;
				if (j == m && i < n) { count++; break; }
				for (; j < m;j++) {
					if (v1[j]>v2[i]) { count += 2; tmp = v1[j], j++; break; }
				   }
			 }
		}
		cout << count << endl;
	}
}
*/