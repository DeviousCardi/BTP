#include<stdio.h>
long int pr(int a[],int n) {
    long int res=a[n-1];
    if(n==0) return 1;
    return res=res*pr(a,n-1); }
int main() {
    long int n;
    int i;
    scanf("%ld",&n);
    int num[n];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]);
        getchar(); }
    printf("%ld",pr(num,n));
    return 0; }