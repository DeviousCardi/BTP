#include <stdio.h>
int main() {
    int n, m, x;
    int i, j;
    int sum1 = 0, sum = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &x);
           sum1+=x; }
        if(sum1>sum)
            sum = sum1;
            sum1 = 0; }
    printf("%d", sum);
    return 0; }