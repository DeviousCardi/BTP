#include<stdio.h>
int max(int a,int b) {
    int c;
    if(a>b)
    c=a;
    else
    c=b;
    return c; }
int maxtill(int n) {
    int m=0,i,j,a[20],mt[20];
    for(i=0;i<=n-1;i++)
    scanf("%d",a[i]);
    for(i=0;i<=n-1;i++) {
    for(j=i-1;j>=0;j--) {
        if(j>0) {
        if(a[j]<a[i]) {
            if (a[j]>m) {
            m=a[j]; } } }
        else
        m=0;
        mt[i]=max(m+1,1); } }
    return mt[n-1]; }
int main() {
    int n,mt;
    scanf("%d",&n);
    mt= maxtill(n);
    printf("%d",mt);
    return 0; }