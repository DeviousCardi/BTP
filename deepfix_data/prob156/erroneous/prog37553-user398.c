#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",n,m);
    int sum=0;
    int sum1=0;
    for(i=1;i<=n;i++) {
        for(i=1;i<=m;i++) {
            int a;
            scanf("%d",a);
            sum1=sum1 + a; }
        if(sum1>=sum)
            sum = sum1;
        sum1=0 }
    printf("%d",sum);
    return 0; }