/*
    Quick Sort
*/

void QuickSort(int* arr,int start,int end)
{
    if(start < end)
    {
        int pivot = Partition(arr,start,end);
        QuickSort(arr,start,pivot-1);
        QuickSort(arr,pivot+1,end);
    }
}
int Partition(int* arr,int start,int end)
{
    int pivot = (start + end-1)/2;

    for (int i = start; i <= end; i++)
    {
        if (arr[pivot]<arr[i])
        {
            start++;
            Swap(arr,start,i);
        }

    }

    Swap(arr,start+1,pivot);
    
    return start+1;
}
void Swap(int* arr,int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}