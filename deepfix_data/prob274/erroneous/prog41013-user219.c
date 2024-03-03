#include <stdio.h>
int main() {
    int n;
    int a[100],b[1000],i;
    scanf("%d\n",&n);
    for (i=0;i<n;i++) {
    scanf("%d",a[1]);
    b[0]=a[0]; }
    for (j=1;j<100;j++) {
      b[1]=a[b[j-1]-1]; }
    printf("%d",b[1]);
    return 0; }