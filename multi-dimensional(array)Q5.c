//5. Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int new[4][4],i,j,sum=0;
    printf("Enter 16 elements to store in matrix\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&new[i][j]);
        }
    }
    printf("The given matrix :\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d  ",new[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j==3-i)
            {
               sum=sum+new[i][j];
            }
        }
        
    }
    printf("The sum of left diagonal of matrix is %d",sum);
   
    return 0;
}