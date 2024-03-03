#include <stdio.h>
int main() {
    int n,m;
    int c;
    int greatest=0;
    int sum[n];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&c);
            sum[i]=sum[i]+c; } }
    for(int l=0;l<n;l++) {
        if(sum[l]>greatest)
        greatest=sum[l]; }
    printf("%d",&greateset);
    return 0; }