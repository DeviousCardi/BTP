#include <stdio.h>
int main() {
    int n,m,sum,max_g=0;
    scanf("%d %d",&n,&m);
    int g[n][m];
    for(int i=0;i<n;i++) {
      sum=0;
        for(int j=0;j<m;j++) {
            scanf("%d",&g[i][j]);
            sum+=g[i][j]; }
      if(sum>=max_g) max_g=sum; }
    printf("%d",max_g);
    return 0; }