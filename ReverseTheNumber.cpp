#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n = 0;
	cin >> n;
	string numbers[n] = { "" };
	for (int i = 0;i < n;i++)
	{
		cin >> numbers[i];
	}
	for (int i = 0; i < n; i++)
	{
		string temp = numbers[i];
		string tempReverse = "";
		int m = temp.length() - 1;
		for (;m >= 0;m--)
		{
			tempReverse += temp[m];
		}
		int value = stoi(tempReverse);
		cout << value << "\n";
	}
	
	return 0;
}
