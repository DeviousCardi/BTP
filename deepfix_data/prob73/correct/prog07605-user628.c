#include <stdio.h>
int main() {
    int n,m,i,j;
    scanf("%d %d\n",&n,&m);
    int a[n];
    int b[m];
    for (i=0;i<n;i++) {
        a[i]=0;
        for (j=0;j<m;j++) {
            scanf("%d ",&b[j]);
            a[i]+=b[j]; }
        scanf("\n"); }
    int great=a[0];
    for (i=0;i<n;i++) {
        if (a[i]>great)
        great=a[i]; }
    printf("%d",great);
    return 0; }