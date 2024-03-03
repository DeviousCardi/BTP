#include <stdio.h>
int main() {
    int m,n,i,j,sum=0,max=0,a;
    scanf("%d %d",&n,&m);
    for(i =1;i<=n;i++) {
        sum=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&a);
            sum=sum+a; }
        if(max<sum)
            max=sum; }
    printf("%d",max);
    return 0; }