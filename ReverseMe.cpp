#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int n = 0;
	cin >> n;
	int a[n]={0};
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int i=n-1;
    for(;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
	return 0;
}
