#include <stdio.h>
int main(){
    int n,x,i,k=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n*n;i++) {
        scanf("%d",&x);
        if(i==1+k*n) {
            if(x!=1) {
                c=c+1; }
            k=k+1; }
        else {
            if(x!=0) {
                c=c+1; } } }
    if(c==0) {
        printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n); }
    else {
        printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }