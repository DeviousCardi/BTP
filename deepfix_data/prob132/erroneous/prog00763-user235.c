#include <stdio.h>
int main() {
  int a,c=0,b,n,i ;
  scanf ("%d",&n) ;
  int a[2*n-1] ;
  for (i=0;i<2*n-1;i++)
  scanf ("%d",&n[i]) ;
  for (i=0;i<2*n-1;i=i+2) {
      b=a[i] ;
      for (j=0;j<2*n-1;j=j+2) {
          if (a[j]==b)
          c=c+1 ; }
      if (c!=b)
      break ; }
  if (i==2*n-1)
  printf ("Yes") ;
  else
  printf ("NO") ;
    return 0; }