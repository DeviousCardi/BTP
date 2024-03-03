#include <stdio.h>
int main() {
    int a1,a2,n;
    scanf("%d%d%d",&a1,&a2,&n);
    if (n=1)
    printf("%d",a1);
    if (n=2)
    printf("%d",a2);
    int i;sum1;sum2;sum;
    sum1=a1;
    sum2=a2;
    for(i=3;i<=n;i++) {
        sum=sum1+sum2-2;
        sum1=sum2;
        sum2=sum; }
    printf("%d",sum); }