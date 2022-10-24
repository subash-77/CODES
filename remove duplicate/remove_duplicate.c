#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements to be added:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!= 0)
        {
            printf("%d ",a[i]);
        }
    }
}