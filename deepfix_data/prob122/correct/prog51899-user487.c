#include <stdio.h>
int main(){
    int n;
    int i,j;
    int a;
 scanf ("%d",&n);
 for (i=1;i<=n;i=i+1)
 {for(j=1;j<=n;j=j+1)
 scanf ("%d",&a);
 {if (i==j)
  {while (a!=1)
  {printf ("GIVEN 3x3 matrix is NOT an IDENTITY MATRIX \n");break;}
  continue;}
  else (i!=j);
    {while (a!=0)
    {printf ("GIVEN 3x3 matrix is NOT an IDENTITY MATRIX\n");break;}
    continue;} } }
    printf ("GIVEN 3x3 matrix is an IDENTITY MATRIX");
    return 0; }