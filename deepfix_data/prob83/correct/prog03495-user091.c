#include <stdio.h>
int main() {
    int n,k=0,i=0;
    scanf("%d",&n);
    printf("%d\n",n);
    int a[n];
    int b[n];
    int m=0;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        printf("%d",a[i]); }
    scanf("%d",&m);
  for(i=(m-1);i<n;i++) {
    b[k]=a[i];
    k++;
    printf("%d",b[k]); } { }
    return 0; }