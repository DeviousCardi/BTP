#include <stdio.h>
int main(){
    int n,i,j,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&e);
            if(i==j) {
                if(e==1)
                continue;
                else
                break; }
            else {
                if(e==0)
                continue;
                else
                break; } }
        if(i==j) {
            if(e==1)
            continue;
            else
            break; }
        else {
            if(e==0)
            continue;
            else
            break; } }
            if(e==0)
            printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
            else
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }