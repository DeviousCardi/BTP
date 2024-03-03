#include <stdio.h>
int main(){
    int i,n=0,j;
    int value[n][n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { for(j=0;j<n;j++)
      { scanf("%d",&value[i][j]); } }
     for(i=0;i<n;i++)
     { for (j=0;j<n;j++)
         {if(((i==(n-1))&&(j==(n-1)))&&(value[i][j]==1))
       {printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
        }else if ((i>j||i<j)&&(value[i][j]!=0))
        {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
     }   else if ((i==j)&& (value[i][j]==0))
        { printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); } } }
    return 0; }