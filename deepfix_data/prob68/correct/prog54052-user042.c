#include<stdio.h>
int a[100000];
float product(int a[],int n) {
    if(n==0)    return a[0];
    else    return a[n]*product(a,n-1); }
int main() {
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        printf("%d",a[i]); }
    printf("%f",product(a,n));
    return 0; }