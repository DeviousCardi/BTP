#include <stdio.h>
int main(){
 int n,a[];
 scanf("%d",&n);
 for(i=0;i<n;i++) {
     for(j=0;j<n;j++)
     scanf("%d ",&a[i][j]);
     scanf("\n"); }
 for(k=0;k<n;k++) {
     if(a[k][k]==1)
     count=count+1; }
    for(l=0;l<n;l++) {
        for(m=0;m<n;m++)
        if(a[l][m]==0&&l!=m)
        c=c+1; }
    if(count==n&&c==n*(n-1))
    printf("GIVEN %d * %d matrix is an IDENTITY MATRIX",n,n);
    else printf("GIVEN %d * %d matrix is NOT an IDENTITY MATRIX");
    return 0; }