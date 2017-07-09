#include <iostream>
using namespace std;
int main() {
      int a, b, c;
	  cin >> a >> b >> c;
	  if (a == b )cout << "YES" << endl;
	  else if ((a < b && c > 0) || (a > b && c < 0)) { if ((b - a) % c == 0)cout << "YES" << endl; else cout << "NO" << endl; }
	  else cout << "NO" << endl;
}



