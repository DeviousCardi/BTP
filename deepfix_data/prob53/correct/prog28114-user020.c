#include<stdio.h>
int sub(int a[ ],int n) {
    if (n==1)
    return 0 ;
    return a[n-1] - sub(a,n-1); }
int main() {
    int n;
    scanf("%d",&n);
    int a [n];
    for(int i=n ;i>0;i--) {
        scanf("%d",&a[i]); }
    printf("%d",sub(a,n+1));
    return 0; }