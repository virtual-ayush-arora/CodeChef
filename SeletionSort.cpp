/*

Seletion Sort

*/

bool Compare(int* min,int* current){

    if(*min>*current){
        return true;
    }
    return false;
}
void Swap(int* start,int* min){

    int temp = *start;
    *start =*min;
    *min = temp;
}
void SeletionSort(int* arr,int n){

    int* end = arr+n;
    int* start = arr;
    int* min = start;
    for (int i = 0; i < n-1; i++)
    {
        int* current = arr+i+1;
        for (; current < end; current++)
        {
            if(Compare(min,current)){
                min = current;
            }
        }
        Swap(start,min);
        start++;
        min = start;
    }
    
}
