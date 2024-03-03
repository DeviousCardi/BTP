#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    int m;
    scanf("%d %d",&n,&m);
    int i,j;
    int mat[m][n];
    int max;
    int min=0;
    for(i=0;i<=m-1;i++)
       { for(j=0,max=0;j<=n-1;j++)
         { scanf("%d",&mat[i][j]);
          if(mat[i][j]>mat[i][max])
              max = j;
           if(mat[i][max]<mat[i+1][max])
             mat[min][max]=mat[i][max]; } }
        printf("%d",mat[min][max]);
  return 0; }