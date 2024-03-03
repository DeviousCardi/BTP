#include <stdio.h>
int main(){
    int n,e,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&e);
            if(i==j) {
                if(e==1) ;
                else
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
            else {
                if(e!=0) {
                    break; } } }
        if(e==1) {
            break; }
        else if(e!=0) {
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); } }
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }