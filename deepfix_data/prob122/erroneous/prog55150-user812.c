#include <stdio.h>
int main(){
    int i,j,n,l;
    scan("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++) {
        scanf("%d",&l);
        if ((i==j) && (l!=1)){
        printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX"); }
        if ((i!=j) && (l=0)){
        printf(" GIVEN n x n matrix is NOT an IDENTITY MATRIX"); } }
    }else
    printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX"); }
    return 0; }