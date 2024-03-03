#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",n,m);
    int i,j,count1=0,k,count=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",k);
            count=+k; }
        if(count1<count) {
            count1=count; } }
    return 0; }