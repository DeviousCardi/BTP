#include <stdio.h>
int main(){
    int ar1[100][100],n,i,j,row,col;
    scanf("%d",&n);
    for(i=0;i<row;i++) {
        for(j=0;j<=col;j++) {
        if(i==j) {
            ar1[i][j]=1;
            printf("%d",ar1[i][j]); }
        else {
            ar1[i][j]=0;
            printf("%d",ar1[i][j]); } }
        printf("\n"); }
        return 0; }