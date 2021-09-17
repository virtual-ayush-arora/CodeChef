/*

Rearrange positive and negative numbers with constant extra space


Given an array of positive and negative numbers, arrange them such that all negative integers appear before all the positive integers in the array without using any additional data structure like hash table, arrays, etc. The order of appearance should be maintained.

Examples:  

Input:  [12 11 -13 -5 6 -7 5 -3 -6]
Output: [-13 -5 -7 -3 -6 12 11 6 5]

*/

void Rearrange_Positive_And_Negitive_Constant_Space(int* arr,int n){
    int* start = arr, * current = arr;

    for (int i = 0; i < n; i++)
    {
        if(*current < 0){
            
            int* temp = current;
            while (current!=start)
            {
                Swap(current,current-1);
                current--;
            }
            current = temp;
            
            start++;
        }
        current++;
    }
    
}
void Swap(int* i,int* j){
    int temp = *i;
    *i = *j;
    *j = temp;
}