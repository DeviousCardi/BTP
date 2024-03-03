#include<stdio.h>
int main() {
    int i,j,n,m,isIdentity=0;
    int s[100][100];
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
        scanf("%d",&s[i][j]); } }
 isIdentity =1;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(i==j && s[i][j]!=1){
            printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX"); }
            else if(i!=j && s[i][j]!=0) { } }
        printf("\n"); }
    return 0; }