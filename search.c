#include<stdio.h>
int revese(int arr[],int n,int x)
{  

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return 1;
        }
    }
    return -1;
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
   int x=3;
   display(arr,n);
   printf("%d",revese(arr,n,x));
   
   
   return 0;

}
