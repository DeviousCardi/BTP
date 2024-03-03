#include <stdio.h>
void rotate(int a[n], int n) {
    int c=a[n-1], i;
    for(i=1;i<n;i++) {
        a[i]=a[i-1]; }
    a[0]=c; }
int main() {
    int n, i, d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=0;i<d;i++) {
        rotate (a,n); }
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }