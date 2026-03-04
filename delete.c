#include<stdio.h>
int delete_element(int arr[],int n,int index)
{  
    if(index>=n || index<0)
    {
        return n;
    }
    for(int i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    
    return n-1;
    
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
   int index=3; 
   display(arr,n);

   n=delete_element( arr, n, index);
   display(arr,n);
   return 0;

}
