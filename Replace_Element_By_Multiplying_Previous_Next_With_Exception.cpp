/*
Replace every array element by multiplication of previous and next


Given an array of integers, update every element with multiplication of previous and next elements with following exceptions. 
a) First element is replaced by multiplication of first and second. 
b) Last element is replaced by multiplication of last and second last.

Example:  

Input: arr[] = {2, 3, 4, 5, 6}
Output: arr[] = {6, 8, 15, 24, 30}

Explanation:
We get the above output using following
arr[] = {2*3, 2*4, 3*5, 4*6, 5*6} 

*/


void Replace_Element_By_Multiplying_Previous_Next_With_Exception(int* arr,int n){

    int previous = arr[0];
    arr[0] = arr[0] * arr[1];
    for (int i = 1; i < n-1; i++)
    {
        int current = arr[i];

        arr[i] = previous * arr[i+1];

        previous = current; 
    }
    arr[n-1] = previous * arr[n-1];
    
}