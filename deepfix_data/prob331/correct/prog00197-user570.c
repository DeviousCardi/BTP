#include <stdio.h>
int main() {
    int i,j,x,y,arr[x][y];
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++) {
        for(j=0;j<y;j++) {
            scanf("%d",&arr[i][j]); } }
    for(i=0;i<x;i++)
    for(j=0;j<y;j++) {
        scanf("%d%d",&i+1,&j+1);
        if(((i==j) && (arr[i][j]==0)) && ((i!=j) && (arr[i][j]!=0)))
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",x,x);
        else
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",x,x); }
    return 0; }