#include <stdio.h>
int main(){
    int status=0;
    int matin;
    int n;
    int i;
    int j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matin);
            if(j==i){
                if(matin!=1)
                    status=1; }
            else{
                if(matin!=0)
                    status=1; } } }
    if(status==1){
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    else if(status==0){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    return 0; }