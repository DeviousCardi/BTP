#include <stdio.h>
int main(){
    int n;
    int i,j,x,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&x);
            if(i==j) {
                if(x!=1) {
                    p=1;
                    break; } }
            if(i!=j) {
                if(x!=0) {
                    p=1;
                    break; } } }
        if(p==1) break; }
    if(p==1) printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX");
    else printf("GIVEN n x n matrix is an IDENTITY MATRIX");
    return 0; }