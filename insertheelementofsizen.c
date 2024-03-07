//WAP to declare a size n
//ask user to insert the element of size n in an arry

#include<stdio.h>
void main()
{
    int n,sum=0;
    int arr[n];
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("Enter the element of an array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
        sum=sum+arr[i];

    }
    printf("%d\n",sum);

}