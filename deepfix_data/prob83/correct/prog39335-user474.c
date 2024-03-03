#include <stdio.h>
int main() {
    int n;
    int i;
    int c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
      scanf("%d",&a[i]); }
    int d;
    scanf("%d",&d);
    for(i=0;i<n;i++) {
        c=(i+d)/n;
        a[i+d-(c*n)]=a[i]; }
    for(i=0;i<n;i++) {
        printf("%d",&a[i]); }
    return 0; }