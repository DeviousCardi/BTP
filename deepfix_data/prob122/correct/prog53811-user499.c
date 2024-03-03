#include <stdio.h>
int main(){
    int i,n=0,j;
    int value[n][n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { for(j=0;j<n;j++)
      { scanf("%d",&value[i][j]); } }
     for(i=0,j=0;i<n,j<n;i++,j++)
     { if((i==j)&&(value[i][j]==1))
       {printf("GIVEN n x n matrix is an IDENTITY MATRIX");
        }else if ((i>j||i<j)&&(value[i][j]==0))
        {printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX"); } }
    return 0; }