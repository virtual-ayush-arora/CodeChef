#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[50] = { 0 }, m = 0;
	int i = 0;
	while (m != 42)
	{
		cin >> m;
		a[i] = m;
		i++;
	}
	for (int j = 0; j < i-1; j++)
	{
		cout << a[j] << "\n";
	}
	return 0;
}
