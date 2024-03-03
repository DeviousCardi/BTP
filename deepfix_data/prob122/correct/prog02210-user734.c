#include <stdio.h>
int main(){
    int i,j,a,b,n;
    scanf("%d",&n);
    for(j=1;i<=n&&j<=n;i=j){
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            if(i==j&&b!=1){
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
                b=0;
                break; }
            else if(i!=j&&b==0){
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
                b=0;
                break; }
            else{
            b=1; } }
        j=j+1; }
    if(b==1){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    return 0; }