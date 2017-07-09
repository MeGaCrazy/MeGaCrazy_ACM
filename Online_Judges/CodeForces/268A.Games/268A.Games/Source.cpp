#include <iostream>
using namespace std;


int main() {
	int count = 0;
	int arr[30][2];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin>>arr[i][j];
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0) {
				for (int w = 0; w < i; w++) {
					if (arr[w][j + 1] == arr[i][j]) {
						count++;
						}
			      	}
		     }else if (j == 1) {
				 for (int s = 0; s < i; s++) {
					if (arr[s][j - 1] == arr[i][j]) {
						count++;
						}
			    	}
			   }
	    	}
     	}

	cout << count << endl;





}