#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    int m;
    scanf("%d %d",&n,&m);
    int i,j;
    int mat[m][n];
    int max;
    int value;
    for(i=0;i<=m-1;i++)
       { for(j=0,max=0;j<=n-1;j++)
         { scanf("%d",&mat[i][j]);
          if(mat[i][j]>mat[i][max])
              max = j; }
         if(i>0) {
          if(value>mat[i][max])
            value=mat[i][max]; }
         else
           value=mat[i][max]; }
            printf("%d",value);
  return 0; }