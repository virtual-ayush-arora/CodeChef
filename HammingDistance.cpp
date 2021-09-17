/*

Hamming distance between two arrays or strings of equal length is the number of positions at which the corresponding character(elements) are different.

Find a rotation with maximum hamming distance


Given an array of n elements, create a new array which is a rotation of given array and hamming distance between both the arrays is maximum. 
Hamming distance between two arrays or strings of equal length is the number of positions at which the corresponding character(elements) are different.
Note: There can be more than one output for the given input. 

Find a rotation with maximum hamming distance | Set 2
Given an integer array arr[].
Create a new array which is a rotation of given array and find the maximum Hamming distance between both the arrays.

nput :  1 4 1
Output :  2
Explanation:  
Maximum hamming distance = 2.
We get this hamming distance with 4 1 1 
or 1 1 4 

Input :  N = 4
         2 4 8 0
Output :  4
Explanation: 
Maximum hamming distance = 4
We get this hamming distance with 4 8 0 2.
All the places can be occupied by another digit.
Other possible solutions are 8 0 2 4 and 0 2 4 8.  

*/
int HammingDistance(int* arr,int n)
{
    int tempArr[n];
    for (size_t i = 0; i < n; i++)
        tempArr[i]  = arr[i];
        
    int maxHammingDistance = 0;

    for (size_t j = 0; j < n; j++)
    {
        Rotate(tempArr,1,n);
        int count = 0;
        for (size_t i = 0; i < n; i++)
            if(arr[i] != tempArr[i])
                count++;

        if(count>maxHammingDistance)
            maxHammingDistance = count;
            
        if(maxHammingDistance == n)
            return maxHammingDistance;

    }
    
  return maxHammingDistance;  
}
void Rotate(int* arr,int d,int n)
{
    while (d%n)
    {
        int firstElement = arr[0];

        for (int i = 1; i < n; i++)
                arr[i-1] = arr[i];

        arr[n-1] = firstElement;
        d--;
    }
}