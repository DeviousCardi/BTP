#include <stdio.h>
int main() {
    int m,n,i,j,sum,k=0;
    int a;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {sum=0;
    for(j=1;j<=m;j++) {
        scanf("%d",&a);
        sum=sum+a; }
    if(sum>k)
    k=sum; }
    printf("%d",k);
    return 0; }