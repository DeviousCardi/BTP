#include <stdio.h>
int main(){
    int k,n;
    int a[999];
    for( int c = 0; c < 1000; c++) {
        a[c] = -1; }
    scanf("%d", &k);
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);.
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0; }