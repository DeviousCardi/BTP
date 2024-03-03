#include <stdio.h>
int main() {
    int n, current, isidentity=1;
    scanf("%d", &n);
    for(int i=1;i<=n*n;i++) {
        scanf("%d", &current);
        if(i%n==(i-1)/n+1) {
                if(current!=1) {
                        isidentity=0;
                        break; } }
        else {
                if(current!=0) {
                        isidentity=0;
                        break; } } }
    if(isidentity==0)
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n, n);
    else
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX", n, n);
    return 0; }