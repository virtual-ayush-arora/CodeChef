/*
Insertion Sort
*/

void Compare(int* i,int* j){

    if(* i>* j){
        Swap(i,j);
    }
}
void Swap(int* i,int* j){

    int temp = * i;
    * i =* j;
    * j = temp;
}
void InsertionSort(int* arr,int n){

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >0; j--)
        {
            Compare(&arr[j-1],&arr[j]);
        }
        
    }
    
}
/*

Another Way
*/
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

