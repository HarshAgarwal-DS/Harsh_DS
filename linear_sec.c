#include<stdio.h>

int linearSearch(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
            return i;   
    return -1;  
    }
}

int main()
{
    int arr[] = {10, 25, 30, 5, 15};
    int n = 5;
    int target= 5;

    int result = linearSearch(arr, n, target);

    printf("%d",result);

    return 0;
}