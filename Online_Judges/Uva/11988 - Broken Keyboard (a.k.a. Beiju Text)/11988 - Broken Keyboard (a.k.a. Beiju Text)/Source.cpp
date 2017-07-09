#include <iostream>
#include <list>
#include <iterator>
#include <string>
using namespace std;
int main() {
	string line;
	while (getline(cin, line)) {
		list<char>mylist;
		list<char>::iterator itr(mylist.begin());
		int length = line.length();
		for (int i = 0; i < length; i++) {
			if (line[i] == '[')itr = mylist.begin();
			else if (line[i] == ']')itr = mylist.end();
			else mylist.insert(itr, line[i]);
		}
		for (itr = mylist.begin(); itr!= mylist.end(); itr++) {
			cout << *itr;
		}cout << endl;
	}
}