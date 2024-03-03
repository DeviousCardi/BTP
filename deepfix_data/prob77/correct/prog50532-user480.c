#include <stdio.h>
int main() {
    int n,i,j,k;
    j>=0;
    scanf("%d",&n);
    int a[n];
    i=1;
    while (i<n) {
        scanf("%d",&a[i]);
        i++; }
    i=1;
    while(i<n)
       { if ((a[i]>=a[n])&&(a[i+j]<=a[n])&&(j<=n-i)) {
                k=a[i];
                a[i]=a[i+j];
                a[i+j]=k;
                i++;
                scanf("%d",&a[i]); }
        else{ i=1;
                while (i<=n) {
                printf("%d ",a[i]);
                i++; } } }
                printf("end");
    return 0; }