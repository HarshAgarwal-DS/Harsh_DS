#include<stdio.h>
int binarysearch(int arr[],int n,int target)
{
    int st=0,end=n-1;
    int mid=(st+end)/2;
    while(st<=end)
    {
        if(target>arr[mid])
        {
            st=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        else
        return mid;
    }
    return-1;
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
   int arr[]={10,11,12,13,14};
   int n = sizeof arr/sizeof arr[0];
   int target=12;
   display(arr,n);
   printf("%d",binarysearch(arr,n,target));
   
   
  
   return 0;

}
