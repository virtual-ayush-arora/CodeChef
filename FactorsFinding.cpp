#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, count = 0;
	int temp[100]={0};
	cin >> n;
	int j = 0;
	for (int i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			++count;
			temp[j] = i;
			j++;
		}
	}
	cout << ++count <<"\n";
	for (int i = 0; i < count-1; i++)
	{
		cout << temp[i] << " ";
		
	}
	cout << n;
	return 0;
}
