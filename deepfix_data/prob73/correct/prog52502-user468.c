#include <stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int gold[m];
    int sum[n];
    for (int i=0;i<n;i++)
    sum[i]=0;
    for (int i=1;i<=n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d",&gold[j]);
            sum[j] = sum[j] + gold[j]; } }
    return 0; }