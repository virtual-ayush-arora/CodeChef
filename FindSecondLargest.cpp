#include <iostream>
using namespace std;


int main() {
	// your code goes here
	long a, b, c;
	//input
	cin >> a;
	cin >> b;
	cin >> c;

	if (b < a)
	{
		if (a < c)
			cout << a;
		else {
			if (b < c)
				cout << c;
			else
				cout << b;
		}
	}
	else
	{
		if (b < c)
			cout << b;
		else 
		{
			if (a < c)
				cout << c;
			else
				cout << a;

		}
	}
	return 0;
}
