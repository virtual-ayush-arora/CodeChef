/*

Program to cyclically rotate an array by one

Given an array, cyclically rotate the array clockwise by one. 

Input:  arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}

Reversal algorithm for right rotation of an array

Given an array, right rotate it by k elements. 

Input: arr[] = {1, 2, 3, 4, 5, 
                6, 7, 8, 9, 10}
          k = 3
Output: 8 9 10 1 2 3 4 5 6 7

Input: arr[] = {121, 232, 33, 43 ,5}
           k = 2
Output: 43 5 121 232 33

*/
void ReverseRotate(int* arr,int d,int n)
{
    while(d%n)
    {
        int lastElement = arr[n-1];

        for (size_t i = n-1; i >0; i--)
        {
                arr[i] = arr[i-1];
        }
        arr[0] = lastElement;
        d--;
    }
}