#include <stdio.h>
int main(){
 int n,m;
 int i,j;
 scanf("%d",&n);
    for(i=1;i<=n;i++)
    { for (j=1;j<=n;j++)
      scanf("%d%d",&i,&j);
      if((i==j)==m){printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
          break; }
      else if(i!=j){printf("G");} }
    return 0; }