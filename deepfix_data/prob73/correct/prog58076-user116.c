#include <stdio.h>
int main() {
    int n,m,i,j,amt_gold,k,x;
    scanf("%d %d\n",&n,&m);
    int sum[n];
    for(i=0;i<n;i++){
        for(j=1;j<=m;j++){
            sum[i]=0;
            scanf("%d ",&amt_gold);
            sum[i] = sum[i] + amt_gold; } }
    for(k=0;k<n;k++){
        x=sum[k];
        if(sum[k+1]>x){
            x=sum[k+1]; } }
    return 0; }