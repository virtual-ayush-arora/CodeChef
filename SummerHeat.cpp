#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int xa,xb,Xa,Xb,sum = 0;
		cin >>xa>>xb>>Xa>>Xb;
		sum += Xa/xa;
		sum += Xb/xb;
		cout<<sum<<endl;

	}
	return 0;
}
