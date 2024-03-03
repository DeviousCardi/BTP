#include <stdio.h>
int main() {
    int n, num;
    scanf("%d",&n);
    int test = 0;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= n; j++) {
            scanf("%d", &n);
            if(j==i) {
                if (n != 1) {
                    test++; } }
            else {
                if( n != 0) {
                    test++; } } } }
    if (test == 0)
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n );
    else
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }