#include <stdio.h>
int main() {
    int n, m, i, k, sum = 0;
    scanf("%d%d", &n, &m);
    int a = 0, b, c;
    for(i = 0; i < n; i++){
        for(k = 0; k < m; k++){
            scanf("%d", &c);
            sum += c; }
        b = sum;
        sum = 0;
        if(b > a){
            a = b; } }
    printf("%d", a);
    return 0; }