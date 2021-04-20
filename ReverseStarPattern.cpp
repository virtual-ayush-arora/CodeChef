#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n = 0;
	cin >> n;
	int i = 0;
	while (i <= n)
	{
		int j = 0;
		while (j < n)
		{
			if (j<=n-1-i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
			j++;
		}
		i++;
		cout << "\n";
	}
	return 0;
}
