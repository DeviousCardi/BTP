#include<stdio.h>
#include<limits.h>
int min(int a[],int m);
int min(int a[],int m) {
    int b=a[0],i;
    for(i=0;i<m;i++) {
        if(a[i]<=b) {
            b=a[i]; } }
    return b; }
int main() {
    int n,m,i,j,a[100000],y,k,ans;
    scanf("%d%d",&n,&m);
    if((n<=0)||(m<=0)) {
        return 0; }
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&y);
            if(j==1) {
                k=y; }
            if(k<=y) {
                k=y; } }
        a[i-1]=k; }
    ans=min(a,m);
    printf("%d",ans);
    return 0; }