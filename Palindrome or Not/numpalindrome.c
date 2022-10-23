#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int org=n;
    int rev=0;
    int d=0;
   while(n!=0)
   {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
   }
   if(org==rev)
   {
        printf("The given number %d is palindrome",rev);
   }
   else
   {
        printf("The given number %d is not palindrome",rev);
   }
}