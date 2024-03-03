#include <stdio.h>
int main() {
    int n, flag=0;
    scanf("%d", &n);
    int a;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &a);
            if(j==i && a!=1) {
                flag=-1; break; }
            else if(j!=i && a!=0) {
                flag=-1; break; } } }
    if(flag==-1)
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n, n);
    else
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX", n, n);
    return 0; }