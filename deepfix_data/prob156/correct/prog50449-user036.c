#include <stdio.h>
int max(a,b){
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n,m,x;
    scanf("%d %d\n",&n,&m);
    x=m*n;
    int a[x];
    int sum[n];
    for(int j=1;j<=n;j++){
        for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
        sum[j]=sum[j]+a[i]; } }
    printf("%d %d",sum[1],sum[2]);
    return 0; }