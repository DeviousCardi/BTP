#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int m,n,k,l=0,i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++) {
         int sum=0;
        for(j=1;j<=m;j++) {
        scanf("%d",&k);
        sum=sum+k; }
        l=max(sum,l); }
    printf("%d",l);
    return 0; }