#include <stdio.h>
int main(){
    int n;
    int i,j;
    int a;
    int x=0;
 scanf ("%d",&n);
 for (i=1;i<=n;i=i+1)
 {for(j=1;j<=n;j=j+1)
{ scanf ("%d",&a);
 if (i==j&&a==1)
    x=1 ;
 else if (i!=j&&a!=0)
    x=1; } }
if (x=0)
   { printf ("GIVEN %d x %d matrix is an IDENTITY MATRIX\n",n,n);}
    else
{printf ("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX\n",n,n);)
    return 0; }