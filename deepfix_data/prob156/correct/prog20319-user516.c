#include <stdio.h>
int main() {
    int n,m,i,j,k,max,d;
    int sum;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<=m;j++) {
        scanf("%d",&k);
        sum=sum+k; }
        max=sum;
        if(max<sum){
        d=sum;
        sum=max;
        max=d; }
        printf("\n"); }
    printf("%d",max);
    return 0; }