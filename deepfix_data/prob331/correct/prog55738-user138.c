#include <stdio.h>
int main() {
    int n,a;
    int flag=0;
    int g=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            scanf("%d",&a);
            if((i==j)&&(a==1)) {
                flag++; }
            else if((i!=j)&&(a==0)) {
                g++; } } }
    if((flag==n)&&(g==(n*n)-n)) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }