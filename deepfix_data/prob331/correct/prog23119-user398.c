#include <stdio.h>
int main(){
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<(n*n);i++) {
        scanf("%d",&a);
        if((((i%(n+1))==0)&&(a!=1))||(((i%(n+1))!=0)&&(a!=0))) {
            printf(" GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
            break; }
        if(i==(n*n-1))
        printf(" GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    return 0; }