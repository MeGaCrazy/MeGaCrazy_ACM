#include <iostream>
using namespace std;

int main() {
	int count = 2;
	int r, c;
	char arr[50][50];
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			arr[i][j] = '.';
		}
	}
	for (int i = 0; i < r; i++) {
		int temp = i + 1;
		for (int j = 0; j < c; j++) {
			if (temp % 2 != 0) {
				arr[i][j] = '#';
			}
			else if (temp % 2 == 0 && count % 2 == 0 && j == c - 1) {
				arr[i][j] = '#';
				count++;
			}
			else if (temp % 2 == 0 && count % 2 != 0 && j == 0) {
				arr[i][j] = '#';
				count++;
				break;
			}
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}

	/*    anthor way
	#include<iostream>
using namespace std;
int a,b,i,j;
int main(){
	cin>>a>>b;
	for(i=0; i<a; i++){
		for(j=0;j<b;j++){
			if(i%2==0||(i%4==3&&j==0)||(i%4==1&&j==b-1)) {cout<<"#";}
			else cout<<".";
	}
	cout<<endl;}} 

	 
	
	
	
	
	*/


}