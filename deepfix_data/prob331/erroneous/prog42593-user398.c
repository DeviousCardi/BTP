#include <stdio.h>
int main(){
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<(n*n);i++) {
        scanf("%d",&a);
        if((((i%(n+1))==0)&&(a!=1))||((i%(n+1))!=0)&&(a!=0)) {
            printf(" GIVEN 3 x 3 matrix is NOT an IDENTITY MATRIX");
            break; }
        if(i==(n*n-1))
        printf(" GIVEN 3 x 3 matrix is an IDENTITY MATRIX") }
    return 0; }