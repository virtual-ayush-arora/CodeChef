/*

Find the Rotation Count in Rotated Sorted array

Consider an array of distinct numbers sorted in increasing order. The array has been rotated (clockwise) k number of times. Given such an array, find the value of k.

Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation : Initial array must be {2, 3,
6, 12, 15, 18}. We get the given array after 
rotating the initial array twice.

Input : arr[] = {7, 9, 11, 12, 5}
Output: 4

Input: arr[] = {7, 9, 11, 12, 15};
Output: 0

*/
int RotationCount(int* arr, int n)
{
    //max value
    int minimumCalculate = arr[0];
    for (size_t i = 0; i < n; i++)
    {
        if(minimumCalculate>arr[i])
        {
            minimumCalculate= arr[i]
            return i;
        }
    }
    return -1;
}