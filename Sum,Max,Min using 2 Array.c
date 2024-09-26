#include <stdio.h>
void main()
{
    int n,arr1[10],arr2[10],n1,i,sum;
    printf("Enter the size of arr1 :");
    scanf("%d",&n);
    printf("Enter the size of arr2 :");
    scanf("%d",&n1);
    printf("Enter the array 1 elements :\n");
    printf("Enter the array 2 elements :\n");
    printf("Arr1 ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Arr2 ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr2[i]);
    }
        printf("Sum ");
    for(i=0;i<n;i++)
    {
        sum=arr1[i]+arr2[i];
        printf(" %d\t",sum);}
        printf("\n");
        printf("Max ");
    for(i=0;i<n;i++)
    {
        if(arr1[i]>arr2[i])
        printf(" %d\t",arr1[i]);
        else
        printf(" %d\t",arr2[i]);
    }
        printf ("\n");
        printf("Min ");
    for(i=0;i<n;i++)
    {
        if(arr1[i]<arr2[i])
        printf(" %d\t",arr1[i]);
        else
        printf(" %d\t",arr2[i]);
    }
}