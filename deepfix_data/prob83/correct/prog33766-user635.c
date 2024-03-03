#include <stdio.h>
int rot(int a[]);
int main() {
    int d,n=1;
    int a[n];
    scanf("%d",&n);
    scanf("%d ",&a[n]);
    scanf("%d", &d);
    a[n] =  rot(a[n]);
    printf("%d ", a[n]);
    return 0; }
int rot(int a[]) {
    int i,n,d=0;
    for(i=0;i<n;i++) {
         a[i]=a[i+(d%n)];
         scanf("%d ",&a[i]); }
    return a[n]; }