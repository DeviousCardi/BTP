#include<stdio.h>
int main() {
    int n,i,l,temp,j;
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
    return 0; }