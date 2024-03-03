#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i=0,x=0;
    scanf("%d %d",&n,&m);
    int a[m],b[n];
    for(i=0;i<m;i++) {
        for(int j=0;j<n;j++)
        scanf("%d ",&b[j]);
        int k=b[0];
        for(x=1;x<(n-1);x++) {
            if(k<=b[x])
            a[i]=b[x]; }
        printf("%d ",a[i]); }
    return 0; }