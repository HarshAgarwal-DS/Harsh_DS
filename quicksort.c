#include<stdio.h>
int partition(int arr[], int st, int end)
{
    int pivot = arr[end];   // last element pivot
    int idx = st- 1;

    for(int j = st; j < end; j++)
    {
        if(arr[j] < pivot)
        {
            idx++;
            int temp=arr[j];
            arr[j]=arr[idx];
            arr[idx]=temp;
        }
    }
    idx++;

    int temp=arr[end];
    arr[end]=arr[idx];
    arr[idx]=temp;
    return idx;
}

void quickSort(int arr[], int st, int end)
{
    if(st< end)
    {
        int pi = partition(arr, st, end);

        quickSort(arr, st, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}