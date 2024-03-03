#include <stdio.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int d,h;
    scanf("%d%d",&d,&h);
    int gold[d],a[h],g[h];g[0]=0;
    for(int j=0;j<=d-1;j++){
        for(int i=0;i<=h-1;i++){
            scanf("%d",a[i]);
            sum[j]=sum[j]+a[i]; } }
    for(int j=0;j<=d-1;j++){g[j]=max(sum[j],g[j])}
    printf("%d",g[d-1]);
    return 0; }