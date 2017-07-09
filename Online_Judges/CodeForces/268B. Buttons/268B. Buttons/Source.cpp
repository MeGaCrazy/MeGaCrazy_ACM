#include <iostream>
using namespace std;

int main() {
	int n, i = 1, sum = 0, count = 1;
	cin >> n; sum += n; int	temp = n - 1, temp2 = n;
	while (temp)
	{
		sum += (n - i) + ((n - i) - 1)*(temp2 - (n - i));
		i++;--temp;
	}cout << sum << endl;


}