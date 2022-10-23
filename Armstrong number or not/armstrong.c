#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int d=0,sum=0;
    int orginal=n;
    while(n!=0)
    {
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;

    }
    if(orginal==sum)
    {
        printf("The given number %d  is armstrong",orginal);
    }
    else
    {
       printf("The given number %d  is not a armstrong",orginal);   
    }

//generate the armstrong number 

}