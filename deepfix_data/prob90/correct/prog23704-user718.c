#include <stdio.h>
int main(){
    int k, n, m, test = 0;
    int a[10000];
    for( int c = 0; c < 10000; c++) {
        a[c] = 0; }
    scanf("%d", &k);
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &m);
        a[m] = a[m] + 1; }
    for( int c = 1; c < 500; c++)
        if ((a[c] != 0)&&(a[k-c] != 0)) {
            test++;
            break; }
    (test == 0) ? printf("unlucky"):printf("lucky");
    return 0; }