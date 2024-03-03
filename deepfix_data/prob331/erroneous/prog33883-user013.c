#include <stdio.h>
int main(){
   int n,m,count=0;
   scanf("%d\n",&n);
   for(int i=1;i<=n;i++) {
       for(int j=1;j<=n;j++) {
            if(j==n)
            scanf("%d\n",&m);
         else
            scanf("%d",&m);
          if(i=j&&a!=1)
           break;
           else if (i!=j&&a!=0)
              break;
           else
           count++; } }
if(count==n*n)
printf("GIVEN %d*%d matrix is an IDENTITY MATRIX",n,n);
else
printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }