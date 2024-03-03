#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,lowest,row;
    scanf("%d%d",&m,&n);
    int max[m];
    int mat[m][n];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
           scanf("%d",&mat[i][j]);
           if(j==0)
           max[i]=mat[i][j];
           else
           if(mat[i][j]>max[i])
           max[i]=mat[i][j]; } }
    lowest=max[0];
    row=1;
    for(i=1;i<m;i++)
    {   printf("..%d..<%d>\n",max[i],i);
        if(lowest>max[i]) {
           lowest=max[i];
           row=i+1; } }
    printf("%d%d",lowest,row);
    return 0; }