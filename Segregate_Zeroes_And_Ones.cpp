/*

Segregate 0s and 1s in an array



You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array [Basically you have to sort the array]. Traverse array only once. 

Input array   =  [0, 1, 0, 1, 0, 0, 1, 1, 1, 0] 
Output array =  [0, 0, 0, 0, 0, 1, 1, 1, 1, 1] 

*/


void Segregate_Zeroes_And_Ones(int* arr,int n){

    int zeroesCount = 0, onesCount = 0; 
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
            onesCount++;
        else
            zeroesCount++;        
    }

    for (int i = 0; i < n; i++)
    {
        if(zeroesCount > 0){
        arr[i] = 0;
        zeroesCount--;
        }
        else{
            if(onesCount > 0){
                arr[i] = 1;
                onesCount--;
            }
        }   
    }
}