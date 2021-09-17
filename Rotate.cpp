/*

Block swap algorithm for array rotation

Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 

Input :  arr[] = [1, 2, 3, 4, 5, 6, 7]
         d = 2
Output : arr[] = [3, 4, 5, 6, 7, 1, 2] 

Quickly find multiple left rotations of an array | Set 1

Given an array of size n and multiple values around which we need to left rotate the array. 
How to quickly find multiple left rotations?

Input : arr[] = {1, 3, 5, 7, 9}
        k1 = 1
        k2 = 3
        k3 = 4
        k4 = 6
Output : 3 5 7 9 1
         7 9 1 3 5
         9 1 3 5 7
         3 5 7 9 1

Input : arr[] = {1, 3, 5, 7, 9}
        k1 = 14 
Output : 9 1 3 5 7
*/

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