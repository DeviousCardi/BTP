#include <stdio.h>
int main() {
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int a[n];
    int b[m];
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            a[i]+=b[j]; } }
    if (a[0]>a[1])
    printf("%d",a[0]);
    else    printf("%d",a[1]);
    return 0; }