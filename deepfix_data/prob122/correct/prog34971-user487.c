#include <stdio.h>
int main(){
    int n;
    int i,j;
    int a;
 scanf ("%d",&n);
 for (i=1;i<n;i=i+1)
 {for(j=1;j<n;j=j+1)
 scanf ("%d",&a);
 {if (i==j)
  {while (a!=1)
  {printf ("GIVEN 3 x 3 matrix is NOT an IDENTITY MATRIX \n");break;} }
  else
    {while (a!=0)
    {printf ("GIVEN 3 x 3 matrix is NOT an IDENTITY MATRIX\n");break;} } }
    printf ("GIVEN 3 x 3 matrix is an IDENTITY MATRIX");}
    return 0; }