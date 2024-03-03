#include <stdio.h>
int main(){
    int n,i,m=1,a;
    scanf("%d",&n);
    for(i=1;i<=(n*n);i++) {
        scanf("%d",a);
        if(i==m) {
            if(a!=1) {
            printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n,n);
            break; }
            m=m+n+1;
            if((i==(n*n))&&(a==1))
            printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n); }
        else {
        if(a!=0) {
            printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n,n);
            break; } }
    return 0; }