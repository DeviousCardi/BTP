#include <stdio.h>
int main(){
 int n,m,count;
 int i,j;
 scanf("%d",&n);
    for(i=1;i<=n;i++)
    { count=0;
        for (j=1;j<=n;j++){
      if(i==j){count++;}} }
      if(count==m){printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
     else if(count!=m){printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }