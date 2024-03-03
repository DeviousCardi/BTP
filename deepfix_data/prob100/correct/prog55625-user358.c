#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i=0,x=0,k=0;
    scanf("%d %d",&n,&m);
    int a[m],b[n];
    for(i=0;i<m;i++) {
        for(int j=0;j<n;j++)
        scanf("%d ",&b[j]);
        k=b[0];
        for(x=1;x<n;x++) {
            if(k<=b[x]) {
            k=b[x]; } }
        a[i]=k; }
    int l=a[0];
    for(x=0;x<m;x++) {
        if(l>=a[x])
        l=a[x]; }
    printf("%d",l);
    return 0; }