/*

Given a sorted and rotated array, find if there is a pair with a given sum

Given an array that is sorted and then rotated around an unknown point.
Find if the array has a pair with a given sum ‘x’. It may be assumed that all elements in the array are distinct.

Input: arr[] = {11, 15, 6, 8, 9, 10}, x = 16
Output: true
There is a pair (6, 10) with sum 16

Input: arr[] = {11, 15, 26, 38, 9, 10}, x = 35
Output: true
There is a pair (26, 9) with sum 35

Input: arr[] = {11, 15, 26, 38, 9, 10}, x = 45
Output: false
There is no pair with sum 45.

*/
int FindPair(int* arr,int sum,int n)
{
    for (size_t i = 0; i < n; i++)
    {
        int pair = sum -arr[i];
        int pairFormed =SearchRotatedArray(arr,pair,n);
        if(pairFormed != (-1))
        {   return pairFormed;}
    }
    return -1;
    
}
int CalculatePivot(int* arr,int n,int minStart)
{
    for (size_t i = 0; i < n; i++)
        if(arr[i]== minStart)
            return i;    
    return -1;
}
int SearchRotatedArray(int* arr,int elementToSearch,int n)
{
    // maximum value
    int minStart = arr[0];
    for (size_t i = 0; i < n; i++)
    {   
        if(arr[i]<minStart)
            minStart = arr[i];
    }

    int pivot = CalculatePivot(arr,n,minStart);    
    
    if(pivot ==-1)
        return -1;
    else
    {
        if(elementToSearch == arr[0])
            return 0;
        else if(elementToSearch>arr[0])
        {   for (size_t j = 0; j < pivot; j++)
            if(elementToSearch == arr[j])
                    return j;
        }
        else 
        {
            for (size_t j = pivot; j < n; j++)
              if(elementToSearch == arr[j])
                    return j;
        }
    }
    return -1;
}
