//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{   
    int n,m,i,j,count;
    printf("Enter no of rows & columns in the matrix\n");
    scanf("%d%d",&n,&m);
    int var[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&var[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(var[i][j]==0)
           {
             count++;
           }  
        }        
    }
    if(count>(n*m)/2)
    {
        printf("Given matrix is a sparse matrix\n");
    }
    else
    {
        printf("Given matrix is not a sparse matrix");
    }
    
    return 0;
}