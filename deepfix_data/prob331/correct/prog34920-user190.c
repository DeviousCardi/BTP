#include <stdio.h>
int main(){
    int n,i,j,a=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            while(a!=1){
                scanf("%d",&a);
                count++; } }
        if(count==n-1){
            continue; }
        else{
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX.");
            break; } }
    if(i==n){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX."); }
    return 0; }