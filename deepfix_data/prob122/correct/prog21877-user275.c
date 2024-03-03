#include <stdio.h>
int main(){
    int n,i=1,j=1,a;
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
    if (i==n&&j==n){
        if(a==1){
            printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
        else{
            printf("GIVEN %d x %d matrix is not an IDENTITY MATRIX",n,n             ); } }
    else{
        printf("GIVEN %d x %d matrix is not an IDENTITY MATRIX",n,n); }
    return 0; }