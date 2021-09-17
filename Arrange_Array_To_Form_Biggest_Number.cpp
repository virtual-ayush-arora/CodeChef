/*


Arrange given numbers to form the biggest number | Set 1


Given an array of numbers, arrange them in a way that yields the largest value.
For example, if the given numbers are {54, 546, 548, 60}, the arrangement 6054854654 gives the largest value. 
And if the given numbers are {1, 34, 3, 98, 9, 76, 45, 4}, then the arrangement 998764543431 gives the largest value.


*/
#include <algorithm>

typedef long long int ll;


ll Compare(int* i,int* j ){
    
    if(*i>*j)
        return *i;
    return *j;

}
ll Arrange_Array_To_Form_Biggest_Number(string* arr,int n){

    ll maximum = MakeArrayToString(arr,n);
    do {
    
        ll value = MakeArrayToString(arr,n);
        maximum = Compare(&maximum,&value);
    
    } while (next_permutation(arr, arr+n));

    return maximum;    
}

ll MakeArrayToString(string* arr,int n){

    string value = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        value.append(arr[i]);
    }
    return stoll(value.c_str());
}