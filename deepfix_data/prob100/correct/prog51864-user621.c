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
    scanf("%d",&mx);
        for(int i=1;i<m;i++) {
            scanf("%d",&temp);
            mx=max(mx,temp); }
    mn=mx;
    for(int j=2;j<=n;j++) {
        scanf("%d",&mx);
        for(int i=1;i<m;i++) {
            scanf("%d",&temp);
            mx=max(mx,temp); }
        mn=min(mn,mx); }
    printf("%d",mn);
    return 0; }