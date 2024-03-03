#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d/n",&n,&m);
    int sum[100];
    for(int b=0;b<n;b++) {
        {   int gold;
            sum[b]=0;
            for(int c=0;c<m;c++) {
                scanf("%d ",&gold);
                sum[b]=sum[b]+gold; }
            scanf("\n"); } }
    for(int x=0;x<n;x++)
    printf("%d\n",sum[x]);
    return 0; }