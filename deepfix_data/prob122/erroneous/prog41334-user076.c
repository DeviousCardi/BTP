#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
  for(i=1;i<=n;i=i+1) {
      for(j=1;j<=n;j=j+1) {
          scanf("%d",&A); }
      printf("\n"); }
  if(((i==j) && (i*j==1))||((i!=j) && (i*j==0)))
          printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n);
  else
      printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n,n);
 return 0; }