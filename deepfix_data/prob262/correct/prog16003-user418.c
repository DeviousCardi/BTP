#include<stdio.h>
#include<strings.h>
int reverse (int a[],int size,int start) {
    a[start]=a[size-start]+a[start];
    a[size-start]=a[start]-a[size-start];
    a[size-start]=a[start]-a[size-start];
    if (start>=size/2) return a[start] ;
   return reverse (a,size,start+1); }
int main() {
    int n ,a[1000001];
    scanf("%d",&n);
    int i;
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int m;
    m=0;
    reverse (a, n, 0);
    for (i=0;i<n;i++) printf("%d ",a[i]);
    return 0; }