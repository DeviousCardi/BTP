#include <stdio.h>
int rot(int a[], int n);
int main() {
    int d,n,i,k;
    scanf("%d",&n);
    int a[n];
    scanf("%d ",&a[n]);
    scanf("%d", &d);
    for (i=0;i<n;i++) {
        a[k] = rot(a,i);
       printf("%d ", a[k]); }
    return 0; }
int rot(int a[], int n) {
    int j,i,d=0;
         a[j]=a[i+(d%n)];
   return a[j]; }