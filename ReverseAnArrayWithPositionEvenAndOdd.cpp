/*

Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i


Given an array of n elements. Our task is to write a program to rearrange the array such that elements at even positions are greater than all elements before it and elements at odd positions are less than all elements before it.
Examples: 
 

Input : arr[] = {1, 2, 3, 4, 5, 6, 7}
Output : 4 5 3 6 2 7 1

Input : arr[] = {1, 2, 1, 4, 5, 6, 8, 8} 
Output : 4 5 2 6 1 8 1 8

*/

void ReverseAnArrayWithStyle(int* arr,int n)
{
    int tempArray[n] = {0};
    InsertionSort(arr,n);
    int start = 0; int end = n-1;
        //even
    for (int i = n-1; i >= 0; i--)
    {
        if(i%2 == 0)
        {   
            tempArray[i] = arr[start];
            start++;
        }
        else
        {
            tempArray[i] =arr[end];
            end--;
        }
    }
    for (size_t i = 0; i < n; i++)
        arr[i] = tempArray[i];
    
}

void InsertionSort(int* arr,int n)
{
    for (size_t i = 1; i < n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}