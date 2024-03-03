#include <stdio.h>
int main() {
    int n,i,j ;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    { for(j=1;j<=n;j=j+1)
      scanf("%d%d",&i,&j);
      if(i==j==1)
      printf(" GIVEN n x n matrix is an IDENTITY MATRIX"); }
    return 0; }