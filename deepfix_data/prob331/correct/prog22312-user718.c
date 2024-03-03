#include <stdio.h>
int main() {
    int p, n, num;
    scanf("%d",&n);
    int test = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            scanf("%d", &p);
            if(j==i) {
                if (p != 1) {
                    test++; } }
            else {
                if( p != 0) {
                    test++; } } } }
    if (test == 0)
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n );
    else
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }