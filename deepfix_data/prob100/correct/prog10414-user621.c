#include<stdio.h>
#include<limits.h>
int max(int a,int b){
    if(a>=b)
    return a;
    else
    return b; }
int min(int a,int b){
    if(a>=b)
    return b;
    else
    return a; }
int main() {
    int m,n,temp,mx,mn;
    scanf("%d,%d",&m,&n);
    int maxrow[n];
    for(int j=1;j<=n;j++) {
        scanf("%d",&mx);
        for(int i=1;i<=m;i++) {
            scanf("%d",&temp);
            mx=max(mx,temp); }
        maxrow[j-1]=mx; }
    mn=maxrow[0];
    for(int i=1;i<n;i++) {
        mn=min(mn,maxrow[i]); }
    printf("%d",mn);
    return 0; }