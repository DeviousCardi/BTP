#include<stdio.h>
int arr[100];
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int getInversions(int l,int r) {
    int c=0;
    for(i=0;i<l+r;i++) {
        for(j=0;j<l+r;j++) {
            if(j>i && a[i]>a[j]) }
        c++ }
    return c; }
int main() {
    int n,k;
    scanf("%d\n",&n);
    scanf("%d",&k);
    int r[n-k],c,a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    c=getInversions(0,k-1);
    for(i=0;i<n-k+1;i++){
    r[i]=getInversions(i,k);
    c=max(c,r[i]); }
    printf("%d",c);
    return 0; }