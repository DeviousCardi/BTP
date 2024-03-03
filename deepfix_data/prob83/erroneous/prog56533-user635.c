#include <stdio.h>
int rot(int a[n]);
int main() {
    int d,n;
    int a[n];
    scanf("%d",&n);
    scanf("%d ",&a[n]);
    scanf("%d", &d);
    a[n] =  rot(int a[n]);
    printf("%d ", a[n]);
    return 0; }
int rot(int a[n]) {
    int x,y,i;
    for(i=0;i<n;i++) {
         a[i]=a[i+(d%n)]; }
    return a[i]; }