#include <stdio.h>
int main() {
    int n,j,i,k,p;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
       {scanf("%d",&a[i]); }
    int b[n];
    for (j=0;j<n;j++) {
        scanf("%d",&b[j]); }
    int c[n];
    for (k=0;k<n;k++) {
         p=b[k];
         c[p]=a[k]; }
     for (p=0;p<n;p++)
     { printf(" %d",c[p]); }
    printf("end");
    return 0; }