/*

Shuffle a given array using Fisher–Yates shuffle Algorithm

Given an array, write a program to generate a random permutation of array elements.
This question is also asked as “shuffle a deck of cards” or “randomize a given array”. 
Here shuffle means that every permutation of array element should equally likely.
 

shuffle-array


*/

void SuffleArray_To_FindAll_Permutation_Fisher_Yates(int* arr,int n){

    for (int i = n-1; i >0; i--)
    {
        srand(time(NULL));
        int j = rand() % (i+1); 

        Swap(&arr[i],&arr[j]);
    }
    
}
void Swap(int* i,int* j){
    
    int temp =*i;
    *i = *j;
    *j = temp;
}
