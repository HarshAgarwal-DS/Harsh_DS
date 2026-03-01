#include<stdio.h>
int getmax(int arr[],int n)
{  
    int ans = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }

    }
    return ans;
    
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
   printf("%d",getmax(arr,n));
   
   
   return 0;

}
