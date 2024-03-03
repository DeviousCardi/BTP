#include <stdio.h>
int max(a,b){
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n,m,b;
    scanf("%d %d",&n,&m);
    int a[m*n];
    int sum[n];
    int k=1;
    for(int j=1;j<=n;j++){
        for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
        sum[k]=sum[k]+a[i]; }
        k++; }
    m=sum[0];
    for(int l=0;l<=n;l++){
        n=max(m,sum[l]);
        m=n; }
    printf("%d",b);
    return 0; }