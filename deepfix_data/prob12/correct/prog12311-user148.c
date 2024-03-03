#include <stdio.h>
int main() {
    int n,i,j,k,x;
    scanf ("%d",&n);
    int a[n];
    int b[n];
    int dist[n];
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    for (j=0;j<n;j++)
        scanf ("%d",&b[j]);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (a[i]==b[j])
            dist[i]=n-i+j; } }
    int min=2*n;
    for (i=0;i<n;i++)
    min=(min<dist[i] ? min : dist[i]);
    printf ("%d",min);
    return 0; }