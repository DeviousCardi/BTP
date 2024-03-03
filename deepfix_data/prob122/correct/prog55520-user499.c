#include <stdio.h>
int main(){
    int x=4,i,j,n,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    { for(j=1;j<=n;j++)
      scanf("%d",&k);
      if((i==j==(n-1))&& (k=0))
      { x=x+1;
        printf("GIVEN %d x %d matrix is an IDETITY MATRIX",n,n);}
      if(((i==j)&&(k=1))&&(i!=j)&&(k=0))
      { x=x+1;
       printf("GIVEN %d x %d matrix is an IDENTITY MATRIX ",n,n);
      }else
       { x=x+1;
           printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX ",n,n);}
     } x=4;
    return 0; }