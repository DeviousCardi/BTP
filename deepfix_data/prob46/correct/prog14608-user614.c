#include <stdio.h>
int main(){
    int m=2;
    int n=10;
    int i;
    int count=0;
    for (i=2; i<n; i++) {
        if (n%i==0) count++; }
    if (count==m) printf("YES\n");
    else printf("NO\n");
    printf("%d", count);
    return 0; }