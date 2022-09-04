//10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
#define row 4
#define col 4
int main()
{
    
    int mat[row][col]={{1,0,0,1},
                       {0,0,1,1},
                       {1,1,1,1},
                       {1,1,1,0}};

     int maxcount=0,index=-1;
     for(int i=0;i<row;i++)
     {
        int count=0;
        for(int j=0;j<col;j++)
        {
            if(mat[i][j]==1)
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            index=i;
        }
     }  
     printf("row with max no of 1s : %d",index);         
    return 0;        
}