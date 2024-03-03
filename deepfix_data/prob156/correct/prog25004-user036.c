#include <stdio.h>
int max(a,b){
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n,m,x,i=0;
    scanf("%d %d\n",&n,&m);
    x=1000;
    int a[x];
    int sum[n];
    int z=0;
    for(int j=1;j<=n;j++){
        for(i=z;i<m;i++){
        scanf("%d",&a[i]); }
        z=z+1; }
    int l=0;
    for(int k=1;k<=n;k++){
        for(int y=l;y<m;y++){
            sum[k]=sum[k]+a[l]; }
        l=l+1; }
    printf("%d %d",sum[1],sum[2]);
    return 0; }