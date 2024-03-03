#include <stdio.h>
int main() {
    int n,i,j;
    scanf ("%d",&n);
    int a[2*n];
    int dist[2*n];
    for (i=0;i<2*n;i++)
        scanf ("%d",&a[i]);
    for (i=0;i<(2*n-1);i++) {
        for (j=(i+1);j<2*n;j++) {
            if (a[i]==a[j]) {
                dist[i]=j-i+1;
                break; }
            else
            dist[i]=400; } }
    for (i=0;i<2*n;i++)
    printf ("%d ",0);
    return 0; }