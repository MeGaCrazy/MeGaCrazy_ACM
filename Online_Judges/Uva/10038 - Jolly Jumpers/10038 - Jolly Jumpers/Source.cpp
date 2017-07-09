#include <iostream>
#include <math.h>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {
	int n, a, b;
	vector<int>v;
	while (scanf("%d",&n)!=EOF,n){
		v.clear();
		cin >> a; int flag = 0;
		for (int i = 1; i < n&&cin >> b; a = b, i++) {
			int temp = abs(a - b);
			v.push_back(temp);
		}
	    sort(v.begin(), v.end());
		for (int i = 1; i <= n - 1; i++) {
			if (v[i-1] != i) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)cout << "Jolly" << endl;
		else cout << "Not jolly" << endl;
	}
}
/*
int main(){

int ar[3500],ar2[3500],n;
while(cin >> n){
for(int i = 0; i < n; i++)cin >> ar[i];
int k = 1;
for(int i = 1; i < n;i++){
ar2[k++] = abs(ar[i]-ar[i-1]);
}
sort(ar2+1,ar2+k);
bool ok = true;
for(int i = 1; i < k; i++){
if(ar2[i] != i){
ok = false;
break;
}
}
if(ok)cout << "Jolly" << endl;
else cout << "Not jolly" << endl;
}
return 0;
}









*/