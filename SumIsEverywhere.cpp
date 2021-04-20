#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long n = 0, countEven = 0, countOdd = 0;
	cin >> n;
	n *= 2;
	int i = 0;
	while (i <= n)
	{
		if (i % 2 == 0)
		{
			countEven += i;
		}
		else
		{
			countOdd += i;
		}
		i++;
	}
	cout << countOdd << " " << countEven;
	return 0;
}
