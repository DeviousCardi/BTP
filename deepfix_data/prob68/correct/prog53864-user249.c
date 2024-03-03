#include<stdio.h>
int pr(int a[],int n) {
    int res=a[n-1];
    if(n==0) return 1;
    return res=res*pr(a,n-1); }
int main() {
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]);
        getchar(); }
    printf("%d",pr(num,n));
    return 0; }