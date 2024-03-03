#include <stdio.h>
int main(){
    int n, r,c,i,j;
    int  a[10][10];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%s",&a[i][j]); } }
 for(i=0;i<n;i++){
     for(j=0;j<n;j++){
         if(((i!=j)&&(a[i][j]==0))&&((i==j)&&a[i][j]==1)){
           printf("GIVEN %d*%d matrix is an IDENTITY MATRIX",n,n);}
           else printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX",n,n); } }
    return 0; }