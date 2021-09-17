/*
Reorder an array according to given indexes

    Difficulty Level : Medium
    Last Updated : 21 Jun, 2021

Given two integer arrays of same size, “arr[]” and “index[]”, reorder elements in “arr[]” according to given index array. It is not allowed to given array arr’s length.

Example: 

Input:  arr[]   = [10, 11, 12];
        index[] = [1, 0, 2];
Output: arr[]   = [11, 10, 12]
        index[] = [0,  1,  2] 

Input:  arr[]   = [50, 40, 70, 60, 90]
        index[] = [3,  0,  4,  1,  2]
Output: arr[]   = [40, 60, 90, 50, 70]
        index[] = [0,  1,  2,  3,   4]

*/

void ReorderArray_According_To_index(int* arr,int*index,int n){
    for (int i = 0; i < n/2; i++)
    {
        if(i != index[i]){
            int temp = i;
            Swap(&arr[temp],&arr[index[temp]]);
            Swap(&index[i],&index[index[i]]);
        }
    }
    
}

void Swap(int* i, int* j){
    cout<<"i  = "<<*i<<"j  = "<< *j;
    int temp = *i;
    *i = *j;
    *j = temp;
}