//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int arr[3][3],i,j,rows,col;
    printf("Enter 9 elements into matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }
    printf("given matrix :\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("sum of rows in matrix is :\n");
    for(i=0;i<3;i++)
    {
        rows=0,col=0;
        for(j=0;j<3;j++)
        {
            rows=rows+arr[i][j];
        }
        printf("%d ",rows);
        printf("\n");
    }
    printf("sum of columns in a matrix :\n");
    for(i=0;i<3;i++)
    {
        rows=0,col=0;
        for(j=0;j<3;j++)
        {
            col=col+arr[j][i];
        }
        printf("%d ",col);
        printf("\n");
    }
  
    
    
   return 0;
}