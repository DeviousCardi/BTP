#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int d,h;
    scanf("%d%d",&d,&h);
    int a[h],g,sum[d];
    g=0;
    for(int j=0;j<=d-1;j++) {
        sum[j]=0;
        for(int i=0;i<=h-1;i++) {
            scanf("%d",&a[i]);
            sum[j]=sum[j]+a[i]; } }
    for(int j=0;j<=d-1;j++) {
        g=max(sum[j],g); }
    printf("%d",g);
    return 0; }