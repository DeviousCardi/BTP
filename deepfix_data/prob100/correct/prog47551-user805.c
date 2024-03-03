#include<stdio.h>
#include<limits.h>
int max(int a,int b){
if(a>b)
return a;
else return b; }
int min(int a,int b){
    if(a<b)
    return a;
    else
    return b; }
int main() {
    int n,m,k,h,i,j,l;
    scanf("%d%d",&n,&m);
    int a[m];
    scanf("%d",&k);
    for(j=0;j<m;j++) {
        for(i=0;i<n-1;i++) {
        scanf("%d",&h);
        k=max(k,h); }
    a[j]=k; }
    l=a[0];
    for(j=1;j<m;j++) {
        l=min(l,a[j]); }
    printf("%d",l);
    return 0; }