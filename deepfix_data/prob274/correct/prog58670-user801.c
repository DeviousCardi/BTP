#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int r[n];
    int f[n];
    int k;
    for(k=0;k<n;k++)
    scanf("%d",&r[k]);
    int i,j;
    f[0]=r[0];
    for(i=1;i<n;i++) {
        f[i]=r[(f[i-1])];
        for(j=0;j<i;j++) {
            if (f[i]==f[j])
            { printf("%d %d",i+1,i-j);
            break; } } }
    return 0; }