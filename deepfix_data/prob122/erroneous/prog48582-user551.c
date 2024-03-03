#include <stdio.h>
int main(){
    int n,i,j,p,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&p);
            if((j==i&&p==1)||(j!=i&&p==0) {
                continue; }
            else {
                c=1;
                break; } }
        if(c==1) {
            break; } }
    if(c!=1) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n) }
    return 0; }