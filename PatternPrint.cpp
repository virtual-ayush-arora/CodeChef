/*
Print Pattern

    *
   **
  ***
 ****
*****

*/

void PrintPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j>=(n-1)-i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
        
    }
}
/*
Print Pattern

*
**
***
****
*****

*/

void PrintPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
PrintPattern

*****
****
***
**
*

*/
void PrintPattern(int n){
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}