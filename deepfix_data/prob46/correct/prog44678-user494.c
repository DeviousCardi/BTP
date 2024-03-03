#include <stdio.h>
int main() {
    int m, n, f, i;
    scanf("%d", &m);
    scanf("%d", &n);
    if(n==0||n==1)
    printf("NO");
    else {
        for(i=2;i<=n/2;++i) {
        if(n%i==0)
        ++f; } }
    if(f==m)
    printf("YES");
    else
    printf("NO");
    return 0; }