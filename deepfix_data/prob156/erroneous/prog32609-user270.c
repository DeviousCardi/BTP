#include <stdio.h>
int main() {
    int n, m;
    scanf("%d%d",n,m);
    for(i=1,i<=m,i++) {
            scanf("%d",&t);
            sum=sum+t; }
        max=sum;
        printf("%d",max);
    for(j=1,j<=n,j++) {
       for(i=2,i<=m,i++) {
            scanf("%d",&t);
            sum=sum+t; }
        if (sum>max) max=sum;
        printf("%d",max); }
    return 0; }