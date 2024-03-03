#include <stdio.h>
int main() {
    int n,m,num;
    scanf("%d %d/n",&n,&m);
    int sum[100];
    for(int b=0;b<n;b++) {
        {   int gold;
            scanf("%d ",&gold);
            for(int c=0;c<m;c++)
            sum[b]=sum[b]+gold; }
    scanf("\n"); }
    for(int x=0;x<n;x++)
    printf("%d\n",sum[x]);
    return 0; }