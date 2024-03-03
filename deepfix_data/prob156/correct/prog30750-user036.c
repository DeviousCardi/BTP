#include <stdio.h>
int max(a,b){
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n,m,x,i=0;
    scanf("%d %d\n",&n,&m);
    x=m*n;
    int a[x];
    int sum[n];
    for(i=0;i<x;i++){
        scanf("%d",&a[i]); }
    int l=0;
    for(int k=0;k<n;k++){
        for(int y=l;y<m;y++){
            sum[k]=sum[k]+a[l]; }
        l=l+1; }
    printf("%d %d",sum[1],sum[2]);
    return 0; }