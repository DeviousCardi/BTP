#include <stdio.h>
int main() {
    int n,m;
    int greatest=0;
    int sum[n];
    for(int k=0;k<n;k++) {
       sum[k]=0; }
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
        {   int c;
            scanf("%d",&c);
            sum[i]=sum[i]+c;
            printf("%d\n",sum[i]); } }
    for(int l=0;l<n;l++) {
        if(sum[l]>greatest)
        greatest=sum[l]; }
    printf("%d",greatest);
    return 0; }