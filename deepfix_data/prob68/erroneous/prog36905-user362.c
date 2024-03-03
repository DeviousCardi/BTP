#include<stdio.h>
int main() {
    int n,a[10000],i,x;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    x=product(int n,int a[]);
    printf("%d",x);
    return 0; }
int product(int n,int a[]) {
    int p;
    if(n==0) {
        return 0; }
    if(n==1) {
        return a[0]; }
    else if ((n-2)!=-1) {
        p=a[n-1]*a[n-2];
        return p; }
    return product(int n-1,int a[]); }