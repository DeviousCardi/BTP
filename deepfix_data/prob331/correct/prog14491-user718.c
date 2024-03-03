#include <stdio.h>
int main() {
    int n, num;
    scanf("%d",&n);
    int test = 0;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("42");
            scanf("%d", &num);
            if (num != 0) {
                test++; } }
        scanf("%d", &num);
        if (num != 1) {
            printf("42");
            test++; }
        for(int j = n; j > i; j--) {
            scanf("%d", &num);
            if (num != 0) {
                test++; }
            printf("42"); }
        printf("%d \n",test); }
    if (test == 0)
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n );
    else
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }