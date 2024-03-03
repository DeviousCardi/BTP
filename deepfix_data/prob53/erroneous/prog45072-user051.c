#include<stdio.h>
int difference(int a[],int n) {
    if(n==1)
        return a[n-1];
    else
        return (difference(a,n-1)-a[n-1]); }
int main() {
    int n,i,number[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",difference(number,n));
    return 0; }