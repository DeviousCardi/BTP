#include <stdio.h>
int main(){
    int n,i,j,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&r);
            if((i==j)&&(r=1)) {
                else if((i!=j)&&(r=0)) }
            else {
                break; } } }
    if((i==n)&&j==n) {
        printf("GIVEN nxn matrix is an IDENTITY MATRIX."); }
    else {
        print("GIVEN nxn matrix is NOT an IDENTITY MATRIX.") }
return 0; }