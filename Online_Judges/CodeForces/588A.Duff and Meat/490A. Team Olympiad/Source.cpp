#include <iostream>
using namespace std;

int main() {
	int n, cost = 0, a, b, temp,min;
	cin >> n >> a >> b; min = b; temp = n - 1; cost += (min*a);
	while (temp)
	{
		cin >> a >> b;
		if (min > b)min = b;
		cost+=(a*min);
		temp--;
	}cout << cost << endl;


}