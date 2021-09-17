/*

Search an element in a sorted and rotated array

An element in a sorted array can be found in O(log n) time via binary search.
But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array in O(log n) time.

Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
         key = 3
Output : Found at index 8

Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
         key = 30
Output : Not found

Input : arr[] = {30, 40, 50, 10, 20}
        key = 10   
Output : Found at index 3

*/
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
int CalculatePivot(int* arr,int n,int minStart)
{
    for (size_t i = 0; i < n; i++)
        if(arr[i]== minStart)
            return i;    
    return -1;
}