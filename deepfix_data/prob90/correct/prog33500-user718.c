#include <stdio.h>
int main(){
    int k, n, m;
    int a[1000];
    for( int c = 0; c < 1000; c++) {
        a[c] = 0; }
    scanf("%d", &k);
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &m);
        printf("%d \n", m);
        a[m] = a[m] + 1; }
    for( int c = 0; c < 1000; c++)
        printf("%d  %d \n", c, a[c]);
    return 0; }