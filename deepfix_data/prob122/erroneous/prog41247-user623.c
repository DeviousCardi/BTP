#include <stdio.h>
int main(){
 int n,i,j,count=0;
 scanf("%d",&n);
 int mat;
 for(i=n;i<=n;i++) {
     for(j=1;j<=n;j++) {
         scanf("%d",&mat);
         printf("%d",mat);
         if((i==j)&&(mat==1))
         count++;
         else
         if((i!=j)&&(mat==0))
         count++; }
     printf("\n") }
    if((count==n*n))
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX.",n,n);
    else
    printf(" GIVEN %d x %d matrix is NOT an IDENTITY MATRIX.",n,n);
    return 0; }