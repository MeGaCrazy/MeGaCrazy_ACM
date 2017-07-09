#include <iostream>
using namespace std;
int arr[1000001], n, m, arr1[1000001];
long long sum = 0;
int main() {
	cin >> n; // unsolved because time excced becuase of loops
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	cin >> m;
	for (int i = 0; i < m; i++) { cin >> arr1[i]; }
	for (int i = 0; i < m; i++) {
		sum = 0;
		for (int j = 0; j < n; j++) {   //thats loop :) is the problem 

			sum += arr[j];                               
			if (sum >= arr1[i]) { cout << j + 1 << endl; break; }
		}
	}// the solu in below is the correct 
}
/*int main() {
	int x, y, n, m;
	cin >> n;
	for (int i = 1,j=1; i <= n; i++) { 
		cin >> x;
		while(x>0){
			arr1[j] = i;
			j++;
            x--;
		}
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
       cin >> y;
		cout << arr1[y] << endl;
	}

}*/