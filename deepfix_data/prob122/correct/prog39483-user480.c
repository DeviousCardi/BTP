#include <stdio.h>
int main(){
    int n;
    scanf("%d\n", &n);
    int i,j,a;
    scanf("%d", &a);
    for(i=1;i<=n;i++)
     {for(j=1;j<=n;j++)
      {if (((i==j) && (a==1))&&((i!=j)&&(a==0)))
        {printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
       else
        {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);} } }
    return 0; }