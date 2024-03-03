#include <stdio.h>
int main() {
    int n,j;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
       {scanf("%d",&a[i]); }
    int b[n];
    for (int j=0;j<n;j++) {
        scanf("%d",&b[j]); }
    int c[n];
    for (int k=b[j];k<n) {
         c[k]=a[k];
         printf("%d",c[k]); }
    printf("end");
    return 0; }