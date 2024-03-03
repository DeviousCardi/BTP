#include<stdio.h>
#include<limits.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int min(int a,int b){
    if(a<b)
    return a;
    else
    return b; }
int main() {
    int i,j,m,n,a,k=0,y,l[100];
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            l[i]=max(a,k);
            k=a; } }
     for(i=1;i<=m;i++) {
        printf("%d ",l[i]); }
    return 0; }