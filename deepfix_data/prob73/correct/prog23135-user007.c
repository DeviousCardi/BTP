#include <stdio.h>
int main() {
    int n,m,sum,max_g=0;
    scanf("%d %d",&n,&m);
    int g;
    for(int i=0;i<n;i++) {
      sum=0;
        for(int j=0;j<m;j++) {
            scanf("%d",&g);
            sum+=g; }
      if(sum>=max_g) max_g=sum; }
    printf("%d",max_g);
    return 0; }