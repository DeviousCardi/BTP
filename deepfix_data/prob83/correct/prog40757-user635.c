#include <stdio.h>
int rot(int a[], int n);
int main() {
    int d=0,n,i=0;
    scanf("%d",&n);
    scanf("%d", &d);
    int a[n];
    for(i=0;i<n;i++) {
    scanf("%d ",&a[i]);
    printf("%d",a[i]); }
    return 0; }
int rot(int a[], int n) {
    int i=0,d=0;
         a[i]=a[i+(d%n)];
   return a[i]; }