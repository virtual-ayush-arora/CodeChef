#include <iostream>
#include <set>
using namespace std;

int main() {
	// your code goes here
	int n = 0;
	cin >> n;
	string lapindromes[n] = { "" };

	for (int i = 0;i < n;i++)
	{
		cin >> lapindromes[i];
	}
	for (int i = 0; i < n; i++)
	{
	    bool no = false;
		string temp = lapindromes[i];
		int tempLength = temp.length();
		set <char> tempCharArray;
		for (int j = 0; j < tempLength; j++)
		{
			tempCharArray.insert(temp[j]);
		}

		if (tempLength % 2 == 0)
		{
			for (set<char> ::iterator it = tempCharArray.begin();it != tempCharArray.end(); it++)
			{
				int countLeft = 0;
				int countRight = 0;

				for (int j = 0; j < tempLength / 2; j++)
				{
					if (*it == temp[j])
						countLeft++;
				}
				for (int j = tempLength / 2; j < tempLength; j++)
				{
					if (*it == temp[j])
						countRight++;
				}

				if (countLeft != countRight) {
					cout << "NO"<< "\n";
					no = true;
					break;
				}
			}
		}
		else
		{
			for (set<char> ::iterator it = tempCharArray.begin();it != tempCharArray.end(); it++)
			{
				int countLeft = 0;
				int countRight = 0;

				for (int j = 0; j < tempLength / 2; j++)
				{
					if (*it == temp[j])
						countLeft++;
				}
				for (int j = (tempLength / 2) + 1; j < tempLength; j++)
				{
					if (*it == temp[j])
						countRight++;
				}
				if (countLeft != countRight) {
					cout << "NO" << "\n";
					no = true;
					break;
				}
				
			}
		}
		if(!no){
		    no = false;
		    cout << "YES" << "\n";
		}
		

	}
	return 0;
}
