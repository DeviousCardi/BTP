#include <stdio.h>
int main() {
    int n,m;
    int h=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            int s=0;
            int k=0;
            scanf("%d",&m);
            if(i==j) {
                if(m==1) {
                    s=1; } }
            if(i!=j) {
                if(m==0) {
                    k=1; } }
            if(s==1||k==1) {
                h=h+1; } } }
    if(h==(n*n)) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }