#include<stdio.h>
int main()
{
    unsigned long long n,i;
    unsigned long long result=1;
    printf("Enter the number:");
    scanf("%llu",&n);
    for(i=1;i<=n;i++)
    {
        result=result*i;
    }
    printf("The factorial of a given number %llu is %llu",n,result);

}