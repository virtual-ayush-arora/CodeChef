#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int cashToWithdraw;
	float totalBalance;
	float deductionAmont = 0.50;
	cin >> cashToWithdraw >> totalBalance;

	if (cashToWithdraw % 5 == 0)
	{
		if (cashToWithdraw + deductionAmont <=totalBalance)
		{
			totalBalance = totalBalance - (cashToWithdraw + deductionAmont);
		}	
	}
	cout <<fixed <<setprecision(2);
	cout << totalBalance;

	return 0;
}
