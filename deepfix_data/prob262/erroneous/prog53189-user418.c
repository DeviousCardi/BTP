#include<stdio.h>
#include<strings.h>
int n;
int reverse (int a[],int size,int start) {
    a[start]=a[size-start]+a[start];
    a[size-start]=a[start]-a[size-start];
    a[size-start]=a[start]-a[size-start]
    if (start>=size/2) return;
   return (revers (a[],size,start++)); }
int main() {
    int n ,a[1000000001];
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int m;
    m=0;
    reverse (int a[],int n,int m);
    return 0; }