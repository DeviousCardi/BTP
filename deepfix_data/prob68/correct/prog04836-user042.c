#include<stdio.h>
float product(int a[],int n) {
    if(n==0)    return a[n];
    else    return a[n]*product(a,n-1); }
int main() {
    int a[1000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    printf("%.0f",product(a,n));
    return 0; }