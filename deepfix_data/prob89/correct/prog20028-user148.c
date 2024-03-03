#include <stdio.h>
int main() {
    int k,n,i,j,flag=0;
    scanf ("%d%d", &k, &n);
    int a[n];
    for (i=0;i<n;i++)
    scanf ("%d", &a[i]);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (k==(a[i]+a[j])) {
                flag=1;
                break; } }
    if (flag==1)
        break; }
    if (flag==1)
        printf ("lucky");
    else
        printf ("unlucky");
    return 0; }