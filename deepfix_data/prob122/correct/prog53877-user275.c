#include <stdio.h>
int main(){
    int n,i=1,j,a;
    scanf("%d",&n);
    while(i<=n){
        while(j<=n){
            scanf("%d",&a);
            if (i==j){
                if(a!=1){
                    break; } }
            else{
                if(a!=0){
                    break; } }
            j++; }
        if (i==j){
                if(a!=1){
                    break; } }
        else{
            if(a!=0){
                break; } }
        i++; }
    if ((i==n+1)&&(j==n+1)){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else{
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }