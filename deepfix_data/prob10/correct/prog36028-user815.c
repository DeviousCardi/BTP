#include<stdio.h>
int main() {
    int n,i,l,temp,j,d;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++) {
        l=1;
        temp=a[i];
        for(j=1;j<=n-1-i;j++)
        if(a[i+j]>temp) {
            temp=a[i+j];
            l++; }
        b[i]=l; }
    for(i=1;i<=n-1;i++) {
        if(b[i]>b[0]) {
            d=b[i];
            b[i]=b[0];
            b[0]=d; } }
    printf("%d",b[0]);
    return 0; }