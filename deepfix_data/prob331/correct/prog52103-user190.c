#include <stdio.h>
int main(){
    int n,a,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if((i==j && a==1)||(i!=j && a==0)){
                continue; }
            else{
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
                break; } }
        if(j!=3){
            break; } }
    if(i==3){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    return 0; }