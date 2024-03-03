#include <stdio.h>
int rot(int a[], int n);
int main() {
    int d,n,i;
    scanf("%d",&n);
    int a[n];
    scanf("%d ",&a[n]);
    scanf("%d", &d);
    for (i=0;i<n;i++) {
        a[i] = rot(a,n);
       printf("%d ", a[i]); }
    return 0; }
int rot(int a[], int n) {
    int i,d=0;
         a[i]=a[i+(d%n)];
   return a; }