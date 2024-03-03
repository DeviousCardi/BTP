#include <stdio.h>
int main(){
 int n,m;
 int i,j;
 scanf("%d",&n);
    for(i=1;i<=3;i++)
    { for (j=1;j<=3;j++)
      scanf("%d%d",&i,&j);
      if((i==j)==m){printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX");
          break; }
      else if(i!=j){printf("G");} }
    return 0; }