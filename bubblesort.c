#include<stdio.h>
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
       
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
        
    }
}

void display(int arr[],int n)
{
    for(int p=0;p<n;p++)
    {
        printf("%d",arr[p]);
    }
    printf("\n");
}
int main()
{
   int arr[]={1,2,0,5,3};
   int n = sizeof arr/sizeof arr[0];
   
   display(arr,n);
   bubble_sort(arr,n);
     display(arr,n);
   
   
   return 0;

}
