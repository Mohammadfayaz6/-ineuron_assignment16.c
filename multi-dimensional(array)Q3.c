//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int arr[3][3],i,j;
    printf("enter 9 elements into an array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The given matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of a given matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    
    
    return 0;
}