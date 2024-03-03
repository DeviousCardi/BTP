#include <stdio.h>
int main(){
  int n,i,j,aij,c=0,d=0;
   scanf("%d",&n);
    for (i=1;i<=n;i++) {
       for (j=1;j<=n;j++) {
          scanf("%d",&aij); } }
    for (i=1;i<=n;i++) {
       for (j=1;j<=n;j++) {
          if (i==j && aij==1){
              c=c+1;
           else
              c=c+0; }
          else if (i!=j && aij==0){
              d=d+1;
            else
              d=d+0; } } }
       if (c==n && d==(n*n)-n)
          printf("GIVEN %d x %d matrix is an IDENTITY MATRIX\n",n,n);
       else
          printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX\n",n,n);
    return 0; }