#include <stdio.h>
int main() {
    int n, m, i, j, k, sum, max=0;
    scanf("%d %d\n", &n, &m);
    for(i=0; i<n; i++){
        sum=0;
        for(j=0; j<m; j++){
            scanf("%d", &k);
            sum=sum+k; }
        if(sum>max){
            max=sum; } }
    printf("%d", max);
    return 0; }