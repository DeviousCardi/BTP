#include <stdio.h>
int main(){
    int n;
    int i,j;
    int a;
 scanf ("%d",&n);
 for (i=1;i<=n;i=i+1)
 {for(j=1;j<=n;j=j+1)
{ scanf ("%d",&a);
 if (i==j) {
  if  (a!=1)
  printf ("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX \n",n,n);
  break; }
 else {
    if  (a!=0)
    printf ("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX\n",n,n);
    break; } } }
if ((i==n+1)&&(j==n+1))
   { printf ("GIVEN %d x %d matrix is an IDENTITY MATRIX\n",n,n);}
    return 0; }