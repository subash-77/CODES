#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements to be added in array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element:");
        scanf("%d",&a[i]);
        printf("\n");
    }
    int max=a[0];
    int min=a[0];
    for(int j=0;j<n;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
    }
    for(int k=0;k<n;k++)
    {
        if(a[k]<min)
        {
            min=a[k];
        }
    }
    printf("Maximum element in array is %d\n",max);
    printf("Minimum element in array is %d",min);
}