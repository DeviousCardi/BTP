#include <stdio.h>
int main() {
    int a,n,i,j,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if((i==j)&&(a==1)) {
                flag=flag+1; }
            else if((i!=j)&&(a==0)){
                flag=flag+1; } } }
    if(flag==n*n){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else{
        printf("GIVEN %d x %d matrix is not an IDENTITY MATRIX",n,n"); }
    return 0; }