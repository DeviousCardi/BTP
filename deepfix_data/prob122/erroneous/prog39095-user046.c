#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
        int d;
        scanf("%d",&d);
        if(i!=j) {
            if(d!=0)
            {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
            goto label; }
        else{
            if(d!=1){
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
                goto label; } } } }
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    label:
    return 0; }