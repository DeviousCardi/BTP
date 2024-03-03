#include <stdio.h>
int main() {
    int n,i,j,a,d;
    scanf("%d%d",&n,&d);
    d=0 ;
    for(i=1;i<=n;i=i+1)
    { for(j=i;j<=n;j=j+1)
      {scanf("%d",&a);
      if((i!=j)&&(a!=1))
       {printf("GIVEN %d x %d matrix is not an IDENTITY MATRIX",n,n);}
      if((i!=j)&&(a!=0))
      {printf("GIVEN %d x %d matrix is not an IDENTITY MATRIX",n,n);} } }
      printf("GIVEN %d x %d matrix is not an IDENTITY MATRIX",n,n);
    return 0; }