#include <iostream>
#include <string>
using namespace std;
int main(){
	string s; int n,d,count = 0, max =0;
	cin >> n >> d;
	for (int i = 0; i < d; i++) { 
		cin >> s; 
		if (s.find("0")!=-1) {
			count++; 
		if (count > max)max = count; 
		} else count = 0;
	}cout << max << endl;
}