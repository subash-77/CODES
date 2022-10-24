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
    int temp;
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(a[j]<a[k])
            {
                temp=a[k];
                a[k]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array elements are:");
    for(int x=0;x<n;x++)
    {
        printf("%d ",a[x]);
    }
}