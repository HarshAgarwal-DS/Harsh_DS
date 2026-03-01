#include<stdio.h>
void revese(int arr[],int n)
{  
    int i =0;
    int j=n-1;

    while(i<j)

    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
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
   int arr[]={1,2,3,4,5};
   int n = sizeof arr/sizeof arr[0];
   display(arr,n);
   revese(arr,n);
   display(arr,n);
   
   return 0;

}
