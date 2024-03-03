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
    int i,j,m,n,a,k=0,max,y,l[100];
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if(a>k)
            k=a ;
            max=k ;
            l[i]=k; } }
     for(i=1;i<=m;i++) {
        printf("%d ",l[i]); }
    return 0; }