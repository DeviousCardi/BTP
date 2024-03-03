#include <stdio.h>
int main(){
    int n,i,j,a,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a);
            while(a!=1){
                scanf("%d",&a);
                count++; }
        if(count==i){
            continue; }
        else{
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX.",n,n);
            break; } } }
    if(i==n){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX.",n,n); }
    return 0; }