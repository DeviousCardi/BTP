#include <stdio.h>
int main() {
    int n,j,i;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
       {scanf("%d",&a[i]); }
    int b[n];
    for (j=0;j<n;j++) {
        scanf("%d",&b[j]); }
    int c[n];
    for (int k=0;k<n;k++) {
         k=b[i];
         c[k]=a[i];
         printf("%d",c[k]); }
    printf("end");
    return 0; }