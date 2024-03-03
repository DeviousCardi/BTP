#include <stdio.h>
int main(){
    int n,i,j,r;
    scanf("%d",&n);
    int flag=1;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&r);
            if((i==j)&&(r=1)){;}
            else if((i!=j)&&(r==0)) ;
            else {
                flag=0;
                break; } }
        if(flag==1){;}
        else{break;} }
    if((i==n)&&j==n) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX.",n,n); }
    else {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
return 0; }