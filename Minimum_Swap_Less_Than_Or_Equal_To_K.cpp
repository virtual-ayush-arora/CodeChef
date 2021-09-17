/*
Minimum swaps required to bring all elements less than or equal to k together

Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together. 

Input:  arr[] = {2, 1, 5, 6, 3}, k = 3
Output: 1

Explanation: 
To bring elements 2, 1, 3 together, swap 
element '5' with '3' such that final array
will be-
arr[] = {2, 1, 3, 6, 5}

Input:  arr[] = {2, 7, 9, 5, 8, 7, 4}, k = 5
Output: 2

*/

int Minimum_Swap_Less_Than_Or_Equal_To_K(int* arr,int n,int k)
{
    int tempArray[n];
    int count =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<= k)
        {
            tempArray[count] = i;
            count++;
        }
    }
    int counterArray[n];
    for (int start = 0; start < n; start++)
    {
        int m= 0,counter = 0;
        for (int iterator = start; m< count; m++)
        {
            if(iterator == tempArray[m])
            {
                counter++;
            }
            iterator++;
        }
        counterArray[start] = counter;
    }   
    return count - Max(counterArray,n);
}

int Max(int* arr,int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (max<arr[i])
            max=arr[i];
        
    return max;
}