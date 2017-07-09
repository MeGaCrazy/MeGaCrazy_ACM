#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
using namespace std;
class book
{
public:
	book(string a, string b) {title = a;author = b;borrowed = false;returned= false;}
	string author, title;
	bool borrowed, returned;
};
void shelve(), borrow(), returnned();
vector <book>v; string s, command, req;
bool cmpa(book a, book b) {return a.author < b.author;}
bool cmpt(book a, book b) { return a.title < b.title;}
int main() {
	
 	while (getline(cin,s) && s != "END") {
		v.push_back(book(s.substr(0, s.find_last_of("\"") + 1), s.substr(s.find_last_of("\"") + 1)));
		stable_sort(v.begin(), v.end(), cmpt);
		stable_sort(v.begin(), v.end(), cmpa);
	}while (cin >> command) {
		if (command == "BORROW") {
			cin.get(), borrow();
		}
		else if (command == "RETURN") {
			cin.get(), returnned();
		}
		else if (command == "SHELVE") {
			cin.get(), shelve();
		}
	}
}
void shelve() {
	for (int i = 0,j; i < v.size(); i++) {
		if (v[i].returned == true) {
			for (j = i; j >= 0; j--) {
				if (v[j].borrowed == false)break;
			}
			if (j == -1) {
				printf("Put %s first\n", v[i].title.c_str());
			}
			else {
				printf("Put %s after %s\n", v[i].title.c_str(), v[j].title.c_str());
			}
			v[i].borrowed = v[i].returned = false;
		}
	}
	cout << "END\n";
}

void borrow() {
	getline(cin, req);
	for (int i = 0; i < v.size(); i++) {
		if (req == v[i].title) {
			v[i].borrowed = true;
			return;
		}
}
}
void returnned() {
	getline(cin, req);
	for (size_t i = 0; i < v.size(); i++) {
		if (req == v[i].title) {
			v[i].returned = true;
			return;
		}
	}
}