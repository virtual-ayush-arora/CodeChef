/*
Rearrange array such that even positioned are greater than odd

    Difficulty Level : Easy
    Last Updated : 20 Apr, 2021

Given an array A of n elements, sort the array according to the following relations : 

A[i] >= A[i-1]
 

, if i is even.  

A[i] <= A[i-1]
 

, if i is odd. 
Print the resultant array.

Examples : 

Input : A[] = {1, 2, 2, 1}
Output :  1 2 1 2
Explanation : 
For 1st element, 1  1, i = 2 is even.
3rd element, 1  1, i = 4 is even.

Input : A[] = {1, 3, 2}
Output : 1 3 2
Explanation : 
Here, the array is also sorted as per the conditions. 
1  1 and 2 < 3.
*/

void RearrangeArray_Even_Position_Greater_Than_Odd_Position(int* arr,int n)
{
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
            if (arr[i]< arr[i-1])
                Swap(&arr[i],&arr[i-1]);            
        else
            if(arr[i]>arr[i-1])
                Swap(&arr[i],&arr[i-1]);        
    }
    
}
void Swap(int* i,int* j)
{
    int temp = *i;
    *i = *j;
    *j=temp;
}