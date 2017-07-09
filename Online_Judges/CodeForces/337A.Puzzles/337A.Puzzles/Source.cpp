#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	int count = 0;
	int flag = 0;
	int pieces[1000];
	int student, puzzles;
	cin >> student >> puzzles;
	for (int i = 0; i < puzzles; i++) {
		cin >> pieces[i];
	}
	sort(pieces, pieces + puzzles);
	int min =pieces[puzzles-1];
	int bla = student - 1;
	for (int i = 0; i < (puzzles-bla); i++) {
		int temp = (pieces[i + (bla)] - pieces[i]);
		if (min >=temp) {
			 flag = 1;
			 min = temp;
		}
	}
	if (flag == 0) {
		cout << "0" << endl;
	}
	else
	{
		if (flag == 1) {
			cout << min << endl;
		}


	}
	
}