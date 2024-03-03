#include <stdio.h>
int main(){
    int i,j,n,c=0;
    scanf("%d ",&n);
    int a[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        scanf("%d ",&a[i][j]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
           if(i==j)
           {if(a[i][j]==1)c++;}
           else
           {if(a[i][j]==0)c++;} } }
    if(c==n*n)printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }