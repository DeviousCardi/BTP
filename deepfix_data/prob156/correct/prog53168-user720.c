#include <stdio.h>
int main() {
    int m,n,i,j,k,a,sum;
    k=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i=i+1){
        for(j=1;j<=m;j=j+1){
            sum=0;
            scanf("%d ",&a);
            sum=sum+a; }
        if(sum>k){k=sum;}
    continue; }
     printf("%d",k);
    return 0; }