#include<stdio.h>
#include<strings.h>
int reverse(int a[],int n) {
    if(n==0)
    return 0;
    printf(a[n-1]);
    return(a,n-1); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[n]);
    reverse(a,n);
    return 0; }