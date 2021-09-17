/*

Write a program to reverse an array or string


Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

Input  : arr[] = {r, i, a}
Output : arr[] = {a, i, r}

*/

template <typename t>
void ReverseAnArray(t* arr,int n)
{
    for (size_t i = 0; i < n/2; i++)
    {
        t temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-1-i] = temp;
    }
    
}
