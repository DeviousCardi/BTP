#include <stdio.h>
int main() {
    int a,n,i,j;
    int count=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++) {
     for(j=1;j<=n;j++) {
   scanf("%d ",&a);
 if(a==1&&j==i)
 continue;
 else if(a==0&&j!=i)
 continue;
 else
 count++; }
     printf("\n"); }
 if(count!=0)
 printf("GIVEN %d X %d matrix is NOT an IDENTITY MATRIX",n,n);
 else
 printf("GIVEN %d X %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }