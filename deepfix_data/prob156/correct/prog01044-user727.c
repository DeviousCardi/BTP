#include <stdio.h>
int main() {
    int n,m,i,j,a,sum,d;
    scanf("%d%d",&n,&m);
    d=0;
    for(i=0;i<n;i++) {
        sum=0;
        for(j=0;j<m;j++) {
            scanf("%d",&a);
            sum=sum+a; }
        if(d<sum)
        d=sum; }
    printf("%d",d);
    return 0; }