#include <iostream>
#include <string.h>
#include <string>
#define fill(x,y) memset(x,y,sizeof(x));
using namespace std;
int main() {
	string s; int i=1,arr[3][3] = { 0 };
	while (getline(cin, s)) {
		cout << "Case #" << i++<<":" << endl;
		fill(arr, 0);
		int length = s.length();
		for (int i = 0; i < length; i++) {
			if (s[i] == 'a')arr[0][1] = (arr[0][1] + 1) % 10, arr[1][0] = (arr[1][0] + 1) % 10, arr[0][0] = (arr[0][0] + 1) % 10;
			else if (s[i] == 'b')arr[0][0] = (arr[0][0] + 1) % 10, arr[1][1] = (arr[1][1] + 1) % 10, arr[0][2] = (arr[0][2] + 1) % 10, arr[0][1] = (arr[0][1] + 1) % 10;
			else if(s[i]=='c')arr[0][1] = (arr[0][1] + 1) % 10, arr[1][2] = (arr[1][2] + 1) % 10, arr[0][2] = (arr[0][2] + 1) % 10;
			else if(s[i]=='d')arr[0][0] = (arr[0][0] + 1) % 10, arr[1][1] = (arr[1][1] + 1) % 10, arr[2][0] = (arr[2][0] + 1) % 10,arr[1][0] = (arr[1][0] + 1) % 10;
			else if (s[i] == 'e')arr[0][1] = (arr[0][1] + 1) % 10, arr[1][0] = (arr[1][0] + 1) % 10, arr[1][2] = (arr[1][2] + 1) % 10, arr[2][1] = (arr[2][1] + 1) % 10, arr[1][1] = (arr[1][1] + 1) % 10;
			else if(s[i]=='f')arr[1][1] = (arr[1][1] + 1) % 10, arr[0][2] = (arr[0][2] + 1) % 10, arr[2][2] = (arr[2][2] + 1) % 10, arr[1][2] = (arr[1][2] + 1) % 10;
			else if(s[i]=='g')arr[1][0] = (arr[1][0] + 1) % 10, arr[2][1] = (arr[2][1] + 1) % 10,arr[2][0] = (arr[2][0] + 1) % 10;
			else if(s[i]=='h')arr[2][0] = (arr[2][0] + 1) % 10, arr[1][1] = (arr[1][1] + 1) % 10, arr[2][2] = (arr[2][2] + 1) % 10, arr[2][1] = (arr[2][1] + 1) % 10;
			else if(s[i]=='i')arr[2][1] = (arr[2][1] + 1) % 10, arr[1][2] = (arr[1][2] + 1) % 10,arr[2][2] = (arr[2][2] + 1) % 10;
		}
		for (int i = 0; i < 3; cout<<endl,i++) {
			for (int j = 0; j < 3; j++) {
				cout << arr[i][j];
				if (j != 2)cout << " ";
			}
		}
	}
}