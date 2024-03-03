#include <stdio.h>
int main() {
    int n,m,gold,sumstat=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) {
        int sum=0;
        for(int j=0;j<m;j++) {
        scanf("%d",&gold);
        sum+=gold; }
        if(sum>sumstat)
        sumstat=sum; }
    printf("%d",sumstat);
    return 0; }