#include <stdio.h>
int main() {
    int n,m,max;
    scanf("%d",&n);
    scanf("%d",&m);
    int gold[m];
    int sum[n];
    for (int i=0;i<n;i++)
    sum[i]=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d",&gold[j]);
            sum[i] = sum[i] + gold[j]; } }
    max = sum[0];
    for (int i=1;i<n;i++) {
        if (sum[i]>max)
        max = sum[i]; }
    printf("%d",max);
    return 0; }