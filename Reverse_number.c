#include<stdio.h>
int rev_num(int n)
{
   int rev=0;
   while(n>0)
   {
    rev=rev*10+n%10;
    n=n/10;
   }
   return rev;
   
}
int main()
{
    int n = 123456;
    printf("%d",rev_num(n));

    return 0;
}