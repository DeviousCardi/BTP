#include <stdio.h>
int main() {
    int n,k=0,i=0,j;
    scanf("%d",&n);
    printf("%d\n",n);
    int a[n];
    int b[n];
    int m=0;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        printf("%d",a[i]); }
    scanf("%d",&m);
  for(j=(m-1);j<n;j++) {
    b[k]=a[j];
    k++;
    printf("%d",b[k]); } { }
    return 0; }