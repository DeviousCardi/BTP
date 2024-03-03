#include <stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
              scanf("%d",&a);
                if(i==j) {
                 if(a==1) {
                    printf("GIVEN n*n matrix is an IDENTITY MATRIX");
                    continue; }
                   else
                    printf("GIVEN n*n matrix is NOT an IDENTITY MATRIX");
                    continue; } }
        printf("\n"); }
    return 0; }