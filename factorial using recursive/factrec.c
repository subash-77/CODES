#include<stdio.h>

int factorial(int num)
{
    if(num==1 || num==0)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}
int main()
{
    int n,result;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative number cannot be possible");
    }
    else
    {
        result=factorial(n);
        printf("Factorial of the given number %d is %d",n,result);
    }
}

