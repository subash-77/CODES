#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=0,b=1,c;
    printf("0 ");
    printf("1 ");
    c=a+b;
    n=n-2;
    while(n!=0)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
        n--;
    }
}