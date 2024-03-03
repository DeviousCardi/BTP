#include <stdio.h>
int main(){
    int n;
    int k;
    scanf("%d \n",&n);
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
        scanf("%d ",&k);
        if(i==j&&k==1||!=j&&k==0)
            continue;
        else if(i==j&&k!=1||i!=j&&k!=0)
        break; } }
    if(i==n+1&&j==n+1)
    printf("GIVEN n x n matrix is an IDENTITY MATRIX");
    else{printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX");}
    return 0; }