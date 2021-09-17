/*

Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed

Given an array, only rotation operation is allowed on array. We can rotate the array as many times as we want. 
Return the maximum possible summation of i*arr[i].


Maximum sum of i*arr[i] among all rotations of a given array

Given an array arr[] of n integers, find the maximum that maximizes the sum of the value of i*arr[i] where i varies from 0 to n-1.

Input: arr[] = {1, 20, 2, 10}
Output: 72
We can get 72 by rotating array twice.
{2, 10, 1, 20}
20*3 + 1*2 + 10*1 + 2*0 = 72

Input: arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9}
Output: 330
We can get 330 by rotating array 9 times.
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
0*1 + 1*2 + 2*3 ... 9*10 = 330

Input: arr[] = {8, 3, 1, 2}
Output: 29

Input: arr[] = {3, 2, 1}
Output: 7
*/

void MaximumValueOfSum(int* arr,int n)
{
	int arrSum = 0;
    int tempRotationValue = 0;
    for (size_t j = 0; j < n; j++)
    {
        arrSum += arr[j];
        tempRotationValue += j*arr[j];
    }
	int maxvalue = 0;
	for (size_t i = 0; i < n; i++)
    {
        tempRotationValue += (arrSum -((n-1)*arr[n-1-i]));
        cout<<tempRotationValue<<"\t";
        if(tempRotationValue>maxvalue)
        {
               maxvalue = tempRotationValue;
        }
    }
    cout<<endl;
    return maxvalue;
}

