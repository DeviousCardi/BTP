#include <stdio.h>
int main(){
    int ar1[100][100],n,i,j,row,col,flag=1;
    scanf("%d",&n);
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
        if(ar1[i][j]!=1 && ar1[i][j]!=0)
          flag=0;
          break; }
        if(flag==1) {
            printf("GIVEN %d x %d is an IDENTITY MATRIX" ,n); }
        else {
            printf("GIVEN %d x %d is NOT an IDENTITY MATRIX" ,n); } }
        return 0; }