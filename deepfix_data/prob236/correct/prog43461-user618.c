#include <stdio.h>
int main() {
    int n,j,i,k,p;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i+1)
       {scanf("%d",&a[i]); }
    int b[n];
    for (j=0;j<n;j+1) {
        scanf("%d",&b[j]); }
    int c[n];
    for (k=0;k<n;k+1) {
         p=b[j];
         c[p]=a[i]; }
     for (p=0;p<n;p+1)
     { printf(" %d",c[p]); }
    printf("end");
    return 0; }