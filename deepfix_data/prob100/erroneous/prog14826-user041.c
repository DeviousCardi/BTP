#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,l=0,i,y,b[10000];
    scanf("%d %d \n",&n,&m);
    for(i=0;i<m;i++) {
    for(j=0;j<n;j++)
    scanf("%d",&a[j]);
    for(k=0;k<n;k++) {
        if(a[k]<=a[l])
        l=k; }
    b[i]=a[k]; }
    l=0;
    for(i=0;i<m;i++) {
        if(b[i]<=b[l])
        l=i; }
    y=b[l];
    printf("%d",y);
    return 0; }