#include<stdio.h>
int difference(int a[],int n) {
    if(n==1)
        return a[n-1];
    else
        return (a[n-1]-difference(a,n-1)); }
int main() {
    int n,number[1000];
    scanf("%d",&n);
    printf("%d",difference(number,n));
    return 0; }