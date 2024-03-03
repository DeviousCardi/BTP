#include <stdio.h>
int main() {
    int n,m,i,j,k,max,d;
    int sum1=0,sum2=0;
    scanf("%d%d",&n,&m);
      for(j=1;j<=m;j++) {
        scanf("%d",&k);
        sum1=sum1+k; }
    for(i=2;i<=n;i++){
        for(j=1;j<=m;j++) {
        scanf("%d",&k);
        sum2=sum2+k; }
      if(sum2>sum1)
        sum1=sum2; }
        printf("\n"); }
    printf("%d",max);
    return 0; }