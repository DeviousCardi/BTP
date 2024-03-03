#include <stdio.h>
int rot(int a[], int n);
int main() {
    int d=0,n,i=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
    scanf("%d ",&a[i]); }
    printf("\n");
    scanf("%d", &d);
    for (i=0;i<n;i++) {
       a[i] = rot(a,n);
        printf("%d ", a[n]); }
    return 0; }
int rot(int a[], int n) {
    int i=0,d=0;
    for(i=0;i<n;i++) {
        a[i] = a[i+(d%n)]; }
     return a[i]; }