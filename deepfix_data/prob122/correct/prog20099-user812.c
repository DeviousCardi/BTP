#include <stdio.h>
int main(){
    int i,j,n,l;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++) {
        scanf("%d",&l);
        if ((i==j) && (l!=1)){
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
        return 0; }
        if ((i!=j) && (l==0)){
        printf(" GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
        return 0; } }
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    return 0; }