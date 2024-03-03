#include<stdio.h>
int sub(int a[ ],int n) {
    if (n==0)
    return 0 ;
    return a[n-1] + sub(a,n-1); }
int main() {
    int n;
    scanf("%d",&n);
    int a [n],b[n];
    for(int i=0 ;i<n;i++) {
        scanf("%d",&b[i]); }
    for(int i=0 ;i<n;i++) {
        a[i]=-b[i]; }
    printf("%d",sub(a,n));
    return 0; }