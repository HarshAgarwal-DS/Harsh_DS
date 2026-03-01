#include<stdio.h>
int insert_element(int arr[],int n,int element,int index)
{  
    if(index>=n || index<0)
    {
        return n;
    }
    for(int i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return n+1;
    
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
   int element=10; 
   int index=3; 
   display(arr,n);

   n=insert_element( arr, n, element, index);
   display(arr,n);
   return 0;

}
