#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,count=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&a);
            if(i==j && a==1){count++;}
            if(i!=j && a==0){count++;} }
        printf("\n"); }
    if(count==n*n){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else{
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }