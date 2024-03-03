#include <stdio.h>
int rotate(int n, int a[], int d) {
     int i;
     for(i=n;i<=2*n-1-d;i++)
     a[i]=a[i-n];
     for(i=0;i<=n-1;i++)
     {a[i]=a[i+d-1];
     printf("%d ",a[i]);} }
int main() {
    int n,d;
    scanf("%d",%n);
    int a[2*n];
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    scanf("%d",&d);
    return 0; }