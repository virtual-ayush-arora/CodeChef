#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a=0,b=0,c=0;
	cin>> a>>b>>c;
	if(a+b>c && a+c>b && b+c>a)
	{   if(a==b && b==c)
	    {
	        cout<<1;
	    }
	    else if(a!=b && a!=c && b!=c)
	    {
	        cout << 3;
	    }
	    else
	    {
	        cout<<2;
	    }
	    
	}
	else{
	    cout<<-1;
	}
	return 0;
}
