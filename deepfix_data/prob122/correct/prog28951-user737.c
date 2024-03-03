#include <stdio.h>
int main(){
 int n,k,i,a;
 scanf("%d",&n);
 for(i=1;i<=n;i++) {
     for(k=1;k<=n;k++) {
     scanf("%d",&a);
      if((k==i&&a!=1)||(k!=i&&a!=0))
     break; }
      if((k==i&&a!=1)||(k!=i&&a!=0))
     break; }
     if((k==i&&a!=1)||(k!=i&&a!=0))
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }