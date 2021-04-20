#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

int main() {
	// your code goes here
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	if (a + b + c == 180)
	{
		if(sin(a*PI/180)==0 || sin(b*PI/180)==0|| sin(c*PI/180)==0)
			cout << "NO";
		else
			cout << "YES";
	}
	else
		cout << "NO";
	
	return 0;
}
