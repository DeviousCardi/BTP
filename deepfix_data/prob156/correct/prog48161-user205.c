#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int max=0;
    for(int i=0; i<n; i++) {
        int a=0, sum=0;
        for(int j=0; j<m; j++) {
            scanf("%d", &a);
            sum = sum+a; }
        if(max<sum) max=sum; }
    printf("%d", max);
    return 0; }