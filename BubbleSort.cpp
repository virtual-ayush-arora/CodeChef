/*

Bubble Sort
*/


void Compare(int* i,int* j){

    if(*i>*j){
        Swap(i,j);
    }
}
void Swap(int* i,int* j){

    int temp = *i;
    *i = *j;
    *j = temp;
}
void BubbleSort(int* arr,int n){
    
    int *sorted = arr+n;

    for (int i = 0; i < n-1; i++)
    {
        for (int* start = arr+1; start < sorted-i; start++)
        {
            Compare(start-1,start);
        }
    }
}