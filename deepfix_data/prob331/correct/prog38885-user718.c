#include <stdio.h>
int main() {
    int n, num;
    scanf("%d",&n);
    int test = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            scanf("%d", &num);
            if (num != 0) {
                test++; }
            printf("%d \n", test);
            scanf("%d", &num);
            if (num != 1) {
                test++; }
            for(int j = n; j > i; j--) {
                scanf("%d", &num);
                if (num != 0) {
                    test++; } }
            printf("%d \n", test); }
    if (test == 0)
        printf("GIVEN n x n matrix is an IDENTITY MATRIX.");
    else
        printf("GIVEN n x n matrix is not an IDENTITY MATRIX.");
    return 0; } }