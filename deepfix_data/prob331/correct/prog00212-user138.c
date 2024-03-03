#include <stdio.h>
int main() {
    int n,a;
    int flag=0;
    int g=0;
    scanf("%d",&n);
    for(int i=1;i<=n*n;i++) {
        scanf("%d",&a);
        if(a==1) {
            flag++; }
        else {
            g++; } }
    if((flag==n)&&(g==(n*n)-n)) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }