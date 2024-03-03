#include<stdio.h>
#include<limits.h>
int max(int a,int b) {
    if(a>b) return a;
    else return b; }
int min(int a,int b) {
    if(a<b) return a;
    else return b; }
int main() {
    int n,m,k,f[m+1],s=INT_MAX;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m; i++) {
        f[i] = INT_MIN
        for(int j=1; j<=n;j++) {
            scanf("%d",&k);
            f[i] = max(f[i],k); } }
    for(int i=1; i<=m; i++) {
        s= min(s,f[i]); }
    printf("%d",s); }