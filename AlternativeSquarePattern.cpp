#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n = 0, counter = 1;
	cin >> n;
	int i = 0;
	while (i < n)
	{
		if (i % 2 == 0)
		{
			int j = counter;
			int limit = counter + 5;
			for ( ;j < limit; j++)
			{
				cout << j << " ";
			}
		}
		else
		{
			counter += 9;
			int j = counter;
			int limit = counter - 5;
			for (; j >limit ; j--)
			{
				cout << j << " ";
			}
			counter++;
		}
		i++;
		cout << "\n";
	}
	return 0;
}
