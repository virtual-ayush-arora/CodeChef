/*

Rearrange positive and negative numbers in O(n) time and O(1) extra space

An array contains both positive and negative numbers in random order. Rearrange the array elements so that positive and negative numbers are placed alternatively. Number of positive and negative numbers need not be equal. If there are more positive numbers they appear at the end of the array. If there are more negative numbers, they too appear in the end of the array.
For example, if the input array is [-1, 2, -3, 4, 5, 6, -7, 8, 9], then the output should be [9, -7, 8, -3, 5, -1, 2, 4, 6]

Rearrange array in alternating positive & negative items with O(1) extra space | Set 1

Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number is followed by negative and vice-versa maintaining the order of appearance. 
Number of positive and negative numbers need not be equal. If there are more positive numbers they appear at the end of the array. If there are more negative numbers, they too appear in the end of the array.


Input:  arr[] = {1, 2, 3, -4, -1, 4}
Output: arr[] = {-4, 1, -1, 2, 3, 4}

Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}
*/
void RearrangePositiveAndNegitive(int* arr,int n)
{
    InsertionSort(arr,n);
    int tempArray[n] = {0};
    int pivot = PivotSearch(arr,n);
    int negitive = pivot - 1;
    int positive = pivot ;
    for (int i = 0; i < n; i++)
    {
        if(i%2 ==0 && positive<n)
        {   
            tempArray[i] = arr[positive];
            positive++;
        }
        else if(negitive>=0)
        {
            tempArray[i] = arr[negitive];
            negitive--;
        }
        else
        {
            tempArray[i] = arr[positive];
            positive++;
        }
    }
    for (int i = 0; i < n; i++)
        arr[i] = tempArray[i];
    
}

int PivotSearch(int* arr,int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i]>0)
            return i;
    return -1;
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