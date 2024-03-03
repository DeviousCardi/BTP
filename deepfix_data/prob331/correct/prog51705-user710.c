#include <stdio.h>
int main(){
    int n,a,x=0;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(i==j){
                if(a==1){x++;}; } } }
    if(x==n){printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
    else{printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);}
    return 0; }