#include <stdio.h>
int max(a,b){
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m*n];
    int k=1;
    for(int j=1;j<=n;j++){
        for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
        sum[k]=sum[k]+a[i]; }
        k++; }
    m=max(sum[0],sum[1]);
    for(int l=2;l<=n;l++){
        b=max(m,sum[l]); }
    printf("%d",b)
    return 0; }