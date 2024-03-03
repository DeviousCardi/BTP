#include <stdio.h>
int main(){
    int n,i,j,a,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
        scanf("%d",&a);
        if(i==j) {
            if(a!=1){x=1;
            break; } }
        else {
            if(a!=0){
                x=1;
            break; } }
    } if(x==1)
    printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n,n); }
        if (x==0)
        printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n);
    return 0; }