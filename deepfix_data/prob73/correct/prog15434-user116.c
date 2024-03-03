#include <stdio.h>
int main() {
    int n,m,i,j,amt_gold,k,x;
    scanf("%d %d\n",&n,&m);
    int sum[n];
    for(i=0;i<n;i++){
        sum[i]=0;
        for(j=1;j<=m;j++){
            scanf("%d",&amt_gold);
            sum[i] = sum[i] + amt_gold; } }
    x=sum[0];
    for(k=0;k<n-1;k++){
        if(sum[k+1]>x){
            x=sum[k+1]; } }
      printf("%d",x);
    return 0; }