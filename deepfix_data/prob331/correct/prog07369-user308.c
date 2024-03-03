#include<stdio.h>
int main() {
    int i,j,n,m,isIdentity=0;
    int s[100][100];
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
        scanf("%d",&s[i][j]); } }
 isIdentity =1;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(i==j && s[i][j]!=1){
            isIdentity=0; }
            else if(i!=j && s[i][j]!=0) {
                isIdentity=0; } } }
    return 0; }