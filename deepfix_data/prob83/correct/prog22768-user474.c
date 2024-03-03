#include <stdio.h>
int main() {
    int n;
    int i;
    int c;
    int y;
    int x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
      scanf("%d",&a[i]); }
    int d;
    scanf("%d",&d);
    for(i=0;i<n;i++) {
        c=(i+d)/n;
        y=a[i];
        x=a[i+d-(c*n)];
        a[i+d-(c*n)]=y;
        y=x; }
    for(i=0;i<n;i++) {
        printf("%d",a[i]); }
    return 0; }