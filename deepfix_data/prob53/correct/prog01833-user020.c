#include<stdio.h>
long int sub(long int a[ ],int n) {
    if (n==0)
    return 0 ;
    return a[n-1] + sub(a,n-1); }
int main() {
    int n;
    scanf("%d",&n);
    long int a [n],b[n];
    for(int i=0 ;i<n;i++) {
        scanf("%ld",&b[i]); }
    for(int i=1;i<n;i++) {
        a[i]=-b[i];
        a[0]=b[0]; }
    printf("%ld",sub(a,n));
    return 0; }