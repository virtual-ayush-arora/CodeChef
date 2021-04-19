#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, k;
	bool isK_here = false;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		if (k == m) {
			isK_here = true;
		}
	}
	if (isK_here) {
		cout << 1;
	}
	else {
		cout << -1;
	}
	return 0;
}
