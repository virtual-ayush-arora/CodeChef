/*

Double the first element and move zero to end


For a given array of n integers and assume that ‘0’ is an invalid number and all others as a valid number. Convert the array in such a way that if both current and next element is valid then double current value and replace the next number with 0. After the modification, rearrange the array such that all 0’s shifted to the end. 
Examples: 

Input : arr[] = {2, 2, 0, 4, 0, 8}
Output : 4 4 8 0 0 0

Input : arr[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8}
Output :  4 2 12 8 0 0 0 0 0 0

*/
void RearrangeDoublerArray_With_End_Zeros(int* arr,int n){
    int zeroCount = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>0 && arr[i+1]>0)
        {
            Doubler(&arr[i],&arr[i+1]);
        }
        else if (arr[i] == 0)
        {
            zeroCount++;
        }
    }
    
    MoveZerosToEnd(arr,n,zeroCount);
}
void Doubler(int* i,int* j){
    *i *=2;
    *j = 0;
}
void MoveZerosToEnd(int* arr,int n,int zeroCount){
    int* start = arr;
    int* end = arr +(n-1);
    for (int i = 0; i < n-zeroCount; i++)
    {
        if(*start == 0)
        {
            if(*end == 0){
                while(*end ==0){
                end--;
                }
            }
            Swap(start,end);
            end--;
        }
        start++;
    }
}
void Swap(int* i,int* j){
    int temp = *i;
    *i =*j;
    *j = temp;
}