#include <stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(i==j){
                if(a!=1)
                    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
                    goto f1; }
            else{
                if(a!=0)
                    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
                    goto f1; } } }
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0;
    f1: return 0; }