#include <stdio.h>
int main(){
    int n,i,j,flag=1;
    float term;
    scanf("%d\n",&n);
    for(j=1;j<=n;j++) {
        for(i=1;i<=n;i++) {
            scanf("%f",&term);
            if(((i==j)&&(term!=1))||((i!=j)&&(term!=0))) {
                flag=0;
                break; } }
        if(flag==0) {
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
            break; } }
    if(flag==1) printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }