#include <stdio.h>
void sort(int a[],int n) {
    if(n<=0)    return;
    int i,min=a[n-1],t;
    for(i=1;i<n;i++) {
        if(a[i]<min) {
            min=a[i];
            t=a[n];
            a[n]=a[i];
            a[i]=t; } }
    sort(a,n-1);
    return; }
int main() {
    int n,k,a[10000],i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",a+i); }
    sort(a,n);
    printf("%d",a[k-1]);
    return 0; }