#include<stdio.h>
int main()
{
    long long int number,sum=0,rem;
    printf("Enter the number:");
    scanf("%lld",&number);

    while(number>0)
    {
        rem=number%10;
       sum=sum+rem;
       number=number/10;
    }
    printf("Sum of the digits in number is: %lld",sum);

}