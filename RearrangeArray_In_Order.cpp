/*
Rearrange an array in order – smallest, largest, 2nd smallest, 2nd largest, ..

Given an array of integers, task is to print the array in the order – smallest number, Largest number, 2nd smallest number, 2nd largest number, 3rd smallest number, 3rd largest number and so on…..

Examples: 
 

Input : arr[] = [5, 8, 1, 4, 2, 9, 3, 7, 6]
Output :arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5}

Input : arr[] = [1, 2, 3, 4]
Output :arr[] = {1, 4, 2, 3}

*/

void RearrangeArray_In_Order(int* arr,int n)
{
    InsertionSort(arr,n);
    int tempArray[n];
    int* start = arr,* end = arr+(n-1);
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            tempArray[i] = *start;
            start++;
        }
        else{
            tempArray[i] = *end;
            end--;
        }
    }
    for (int i = 0; i < n; i++)
        arr[i] = tempArray[i];    
}
void InsertionSort(int* arr,int n)
{
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if(arr[i]<arr[j])
                Swap(&arr[i],&arr[j]);
    
}
void Swap(int* i,int* j){
    int temp = *i;
    *i =*j;
    *j = temp;
}