//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],res[3][3],i,j;
    printf("Enter 9 elements for first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter 9 elements for second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The product of two matrixs is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            res[i][j]=arr1[i][j]*arr2[i][j];
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}