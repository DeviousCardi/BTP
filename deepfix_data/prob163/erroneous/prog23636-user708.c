#include <stdio.h>
#include <string.h>
int main() {
    int a[505], b[505], sum[505], n1, n2, t, carr=0;
    scanf("%d",n1);
    scanf("%d",n2);
    for(i=0;i<n1;i++)
        scanf("%d",&a[505+i-n1]);
    for(i=0;i<n2;i++)
        scanf("%d",&b[505+i-n2]);
    for(i=504;i>=0;i--) {
        t=a[i]+b[i]+carr;
        sum[i]=t%10;
        carr=t/10; }
    for(i=0;sum[i]==0;i++);
    for(;i<505;i++)
        printf("%d",sum[i]);
    return 0; }