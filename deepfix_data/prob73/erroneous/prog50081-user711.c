#include <stdio.h>
int main() {
    int n,m,x,sum,max=0;
    scanf("%d %d\n",&n,&m);
    for(i=1;i<=n;i++){
        sum=0
        for(j=1;j<=m;j++){
            scanf("%d",&x);
            sum+=x; }
        if(sum>=max){
            max=sum; }
        printf("\n"); }
    return 0; }