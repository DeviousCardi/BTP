#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int r[n];
    int f[n];
    int i,j;
    for(i=0;i<n;i++) {
        f[i]=r[r[i-1]];
        for(j=1;j<i;j++) {
            if (f[i]==f[j])
            break; } }
    printf("%d %d",i+1,j+1);
    return 0; }