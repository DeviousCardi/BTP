#include <stdio.h>
int main() {
    int n,i,j,aij;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    { for(j=i;j<=n;j=j+1)
      {scanf("%d",aij);
      if(((i==j)&&(aij==1))&&((i!=j)&&(aij==0)))
      {printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
      else
      {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX");} } }
    return 0; }