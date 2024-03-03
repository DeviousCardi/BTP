#include <stdio.h>
int main(){
    int m;
    scanf("%d", &m);
    int n;
    scanf("%d", &n);
    int i;
    int count=0;
    for (i=2; i<n; i++) {
        if (n%i==0) count++; }
    if (count==m) printf("YES\n");
    else printf("NO\n");
    return 0; }