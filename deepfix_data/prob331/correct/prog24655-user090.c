#include <stdio.h>
int main(){
    int i,j,n,a,count ;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
     {scanf("%d",&a) ;
     if(i==j&&a==1)
     { if(i!=j&&a==0)
      {printf(" GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);} }
     else if(i==j&&a!=1)
       {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);} } }
    return 0; }