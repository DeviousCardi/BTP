#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    int m;
    scanf("%d %d",n,m);
    int i,j;
    int mat[n*m];
    for(i=1;i<=m;i++)
       { for(j=1;j<=n;j++)
          scanf("%d",mat[j]);
          printf("\n"); }
    return 0; }