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
    if(x==n){printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX")}
    return 0; }