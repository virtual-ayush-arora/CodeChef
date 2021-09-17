/*

Find the minimum element in a sorted and rotated array
A sorted array is rotated at some unknown point, 
find the minimum element in it. 

The following solution assumes that all elements are distinct.

Input: {5, 6, 1, 2, 3, 4}
Output: 1

Input: {1, 2, 3, 4}
Output: 1

Input: {2, 1}
Output: 1

*/

int MinumValue(int* arr, int n)
{
    int minimumCalculate = arr[0] ;
    for (size_t i = 0; i < n; i++)
    {
        if(minimumCalculate>arr[i])
        {
            minimumCalculate= arr[i];
            return minimumCalculate;;
        }
    }
    return -1;
}