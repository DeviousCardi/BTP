#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    i=1;
    while (i>0 && i<n) {
        scanf("%d",a[i]);
        if ((a[i]>a[])&&(a[i+j]<a[]))&&(j<n-i) {
                k=a[i];
                a[i]=a[j];
                a[j=k] }
        printf("%d ",a[i]);
        i++; }
    printf("end");
    return 0; }