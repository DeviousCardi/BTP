#include <stdio.h>
int main(){
  int n,i,a,c=0,d=0;
   scanf("%d",&n);
    for (i=1;i<=n*n;i++) {
          scanf("%d",&a); }
    for (i=1;i<=n*n;i=i+n+1) {
       if (a==1)
          c=c+1;
       else
          c=c+0; }
     for (i=2 && i!=i+n+1;i<=n*n;i++)
       if (a==0)
          d=d+1;
       else
          d=d+0;
        printf("%d %d\n",c,d);
       if (c==n && d==n*n-n)
          printf("GIVEN %d x %d matrix is an IDENTITY MATRIX\n",n,n);
       else
          printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX\n",n,n);
    return 0; }