#include <stdio.h>
int main() {
    int m,n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&m);
            if(i==j) {
                if(m!=1) {
                    printf("GIVEN %d x %d matrix is",n,n);
                    printf(" NOT an IDENTITY MATRIX");
                    break; } }
            if(i!=j) {
                if(m!=0) {
                    printf("GIVEN %d x %d matrix is",n,n);
                    printf(" NOT an IDENTITY MATRIX");
                    break; } }
             if((i==n)&&(j==n)) {
                printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); } }
        if(i==j) {
            if(m!=1)
            break; }
         if(i!=j) {
            if(m!=0)
            break; } }
    return 0; }