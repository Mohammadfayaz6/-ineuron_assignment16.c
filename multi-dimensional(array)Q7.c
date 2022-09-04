//7. Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{   
    int size1,size2,i,j;
    printf("Enter the size of matrix\n");
    scanf("%d%d",&size1,&size2);
    int array[size1][size2];
    printf("Enter the elements into an matrix\n");
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("Given matrix is :\n");
     for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
           printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("Lower triangular matrix :\n");
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            if(i<j)
            {
               printf(" 0 ");
            }
            else
            {
                printf("%d ",array[i][j]);
            }
        }
        printf("\n");
    }
      

    
    return 0;
}