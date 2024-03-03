#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d%d",&i,&j); } }
    if(i==j && i==1) {
        printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX"); }
    else {
        printf("GIVEN 3 x 3 matrix is NOT an IDENTITY MATRIX"); }
    return 0; }